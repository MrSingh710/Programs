# include <iostream>
using namespace std;

int intersection(int arr1[], int n, int arr2[], int m){

	int i=0, j=0;
	vector<int> ans;

	while(i<n && j<m) {

		if (arr1[i]==arr2[j]) {
			ans.push_back(arr1[i]);
			i++;
			j++;
		}

		else if (arr1[i]<arr2[j]) {
			i++;
		} 

		else {
			j++;
		}
	}
	return ans;
}

int main()   {
    int n1, n2, n3, arr1[100], arr2[00], arr3[100];
    cout<< "Enter the size of the first array:";
    cin>> n1;
    cout<< "Enter the elements of the this array:";
    for (int i=0; i<n1; i++) {
        cin>> arr1[i];
    }
    cout<< "Enter the size of the second array:";
    cin>> n2;
    cout<< "Enter the elements of the array:";
    for (int i=0; i<n2; i++) {
        cin>> arr2[i];
    }

    
}