#include <iostream>
using namespace std;

int main()
{
string str; 
cout << "Input: ";
getline(cin,str);
int n = str.length();
for(int i=0; i<n; i++)
{
	cout << str[i];
}
cout << endl;
for(int i=0; i<n; )
{
	if(str[i]!=str[i+1])
	{
		cout << str[i];
		i++;
	}
	else
	{
		cout << str[i];
		i += 2;
	}
}
}
