#include <iostream>
#include <string.h>
using namespace std;

int main() {

    // string str;
    // cout << "Enter the string: ";
    // getline(cin, str);

    // cout << "Entered string: " << str << endl;

    // cout << "Length of the string: " << str.length() << endl;
    // cout << "Is string empty: " << str.empty() << endl;


    // str.push_back('@');
    // cout << "String after push back: " << str << endl;

    // str.pop_back();
    // cout << "String after pop back: " << str << endl;


    // cout << "Sub string from 0 to 5: " << str.substr(0, 5) << endl;


    // string a = "jas";
    // string b = "jass";
    // if(a.compare(b) == 0) {
    //     cout << "a and b are exactly same" << endl;
    // }                  // -1
    // else if(a.compare(b) < 0) { 
    //     cout << "ASCII value of string a is less than that of string b" << endl;
    // }                   // 1
    // else if(a.compare(b) > 0) {
    //     cout << "ASCII value of string a is more than that of string b" << endl;
    // }


    // string sentence = "Hello, I am 20 years old";
    // string target = "I am";
    // if(sentence.find(target) == string::npos) {
    //     cout << "Target is not found" << sentence.find(target) << endl;
    // }
    // else {
    //     cout << "Target is found at " << sentence.find(target) << " position" << endl;
    // }


    // string str = "This is my first message";
    // string word = "It";
    // //  replace(starting index of the string in which replacement will take place, no of characters to be replaced, string to be replaced)
    // str.replace(11, 5, "second");
    // cout << str << endl;
    // str.replace(0, 4, word); 
    // cout << str << endl;

    string str = "This is my example message";
    str.erase(11, 7);
    cout << str << endl;

}