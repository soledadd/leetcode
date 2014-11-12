#include<iostream>
using namespace std;
int removeDuplicates(int A[], int n) {
	if (n == 0) return 0;
	int *p = A;
	int s = A[0];
	int count = -1;
	A[++count] = A[0];
	for (int i = 1; i < n;i++) {
		if (p[i] != s) {
			A[++count] = A[i];
		}
		s = p[i];
	}
	return count+1;
}
int main()
{
	cout <<"";
}
