#include<iostream>
using namespace std;
int removeElement(int A[], int n, int elem) {
	int count = m;
	int x = 0;
	int *p = A;
    for (int i = 0; i < n;i++) {
    	if (p[i] == elem) {
    		count--;
    	} else {
    		A[x++] = A[i];
    	}
    }  
    return count;
}
int main() {
	
}

