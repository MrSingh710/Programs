#include <iostream>
#include <vector>
using namespace std;

using Vector = vector<int>;

void printVector(const Vector& a)
{
	for (auto e : a)
		cout << e << " ";
	cout << endl;
}

Vector mergeTwo(Vector& A, Vector& B)
{
	int m = A.size();
	int n = B.size();

	Vector D;
	D.reserve(m + n);

	int i = 0, j = 0;
	while (i < m && j < n) {

		if (A[i] <= B[j])
			D.push_back(A[i++]);
		else
			D.push_back(B[j++]);
	}

	while (i < m)
		D.push_back(A[i++]);

	while (j < n)
		D.push_back(B[j++]);

	return D;
}

int main()
{
	Vector A = { 5, 8 , 10 };
	Vector B = { 1, 6, 9, 15 };
	Vector C = { 2, 19 };
    Vector T = mergeTwo(A, B);
	printVector(mergeTwo(T, C));
	return 0;
}