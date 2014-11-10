#include<iostream>
using namespace std;
void merge(int *a ,int p,int q,int r)
{//0 3 7
	int n1 = q - p + 1;// 3 - 0 +1 = 4
	int n2 = r - q; // 7 - 3 = 4;
	int L[100];
	int R[100];
	for(int i = 1; i <= n1;i++) {
		L[i] = a[p + i - 1];//0+1-1 0+2-1 0+3-1 0+4-1
	}
	for (int j = 1;j <= n2;j++) { 
		R[j] = a[q + j];//3+1 3+2 3+3 3+4
	}
	L[n1+1] = 1000000;
	R[n2+1] = 1000000;
	int i = 1;
	int j = 1;
	for (int k = p;k <= r;k++) {
		if (L[i] <= R[j]){
			a[k] = L[i];
			i++;
		} else {
			a[k] = R[j];
			j++;
		}
	}
}
void merge_sort(int *a,int p,int r)
{
	if (p < r) {
		int q = (p+r)/2;
		merge_sort(a,p,q);//0 3 
		merge_sort(a,q+1,r);// 4 7
		merge(a,p,q,r);
	}
}
int main()
{
	int a[8]={2,4,9,7,1,0,3,6};
	merge_sort(a,0,7);
	for (int i = 0; i < 8;i++ ){
		cout<<a[i]<<" ";
	}
}
