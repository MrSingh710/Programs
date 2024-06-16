#include <iostream>
#include <string>
#include <list>

using namespace std;

struct DNSCacheEntry {
    string domainName;
    string ipAddress;
};

class DNSCache {
private:
    static const int TABLE_SIZE = 1000;
    list<DNSCacheEntry>* table;

public:
    DNSCache() {
        table = new list<DNSCacheEntry>[TABLE_SIZE];
    }

    ~DNSCache() {
        delete[] table;
    }

    int hashFunction(string domainName) {
        int sum = 0;
        for (char c : domainName) {
            sum += c;
        }
        return sum % TABLE_SIZE;
    }

    int quadraticProbing(int index, int i) {
        return (index + i + i * i) % TABLE_SIZE;
    }

    void insert(string domainName, string ipAddress) {
        int index = hashFunction(domainName);
        int i = 0;
        while (true) {
            int probeIndex = quadraticProbing(index, i);
            if (table[probeIndex].empty()) {
                DNSCacheEntry entry = {domainName, ipAddress};
                table[probeIndex].push_back(entry);
                return;
            }
            i++;
        }
    }

    string lookup(string domainName) {
        int index = hashFunction(domainName);
        int i = 0;
        while (true) {
            int probeIndex = quadraticProbing(index, i);
            for (DNSCacheEntry& entry : table[probeIndex]) {
                if (entry.domainName == domainName) {
                    return entry.ipAddress;
                }
            }
            i++;
        }
        return ""; // not found
    }

    void update(string domainName, string newIpAddress) {
        int index = hashFunction(domainName);
        int i = 0;
        while (true) {
            int probeIndex = quadraticProbing(index, i);
            for (DNSCacheEntry& entry : table[probeIndex]) {
                if (entry.domainName == domainName) {
                    entry.ipAddress = newIpAddress;
                    return;
                }
            }
            i++;
        }
    }
};

int main() {
    DNSCache cache;

    cache.insert("example.com", "192.0.2.1");
    cache.insert("example.net", "192.0.2.2");

    cout << cache.lookup("example.com") << endl;
    cout << cache.lookup("example.net") << endl; 

    cache.update("example.com", "192.0.2.3");
    cout << cache.lookup("example.com") << endl; 

    return 0;
}