#include <bits/stdc++.h>
using namespace std;

void Josh(vector<int> person, int k, int index)
{
	if (person.size() == 1) {
		cout << person[0] << endl;
		return;
	}

	index = ((index + k) % person.size());
	person.erase(person.begin() + index);
	Josh(person, k, index);
}

int main()
{
	int n;
	int k;
    cout << "Enter n and k: ";
    cin >> n >> k;
	k--; 
	int index = 0; 
	vector<int> person;
	for (int i = 1; i <= n; i++) 
    {
		person.push_back(i);
	}

	Josh(person, k, index);
}