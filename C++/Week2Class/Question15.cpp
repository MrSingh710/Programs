#include <iostream>
using namespace std;

string say(string prevSequence){
    
    int counter = 1;
    
    string output;
    
    for (int i = 0; i < prevSequence.length(); i++){
        
        if (i + 1 < prevSequence.length() && prevSequence[i] == prevSequence[i + 1]){
            counter++;
        }
            
        else{
            output += to_string(counter) + prevSequence[i];
            counter = 1;
        }
    }

    return output;
}


string countAndSay(int n){
        if (n == 1){
        return "1";
    }
    string prevSequence = countAndSay(n - 1);

    string sequence = say(prevSequence);
    return sequence;
}

int main(){
    int n=4;
    string sequence = countAndSay(n);
    cout << "Count and Say sequence for " << n << " is: " << sequence << endl;

    return 0;
}