#include<iostream>
using namespace std;
int l_low,l_high,l_sum;
int r_low,r_high,r_sum;
int c_low,c_high,c_sum; 
find_max_cross_subarray(int *a,int low,int mid,int high) 
{
	l_sum = -10000;
	int sum = 0;
	int max_left=0;
	for(int i =mid ;i>=low;i--) {
		sum += a[i];
		if (sum > l_sum) {
			l_sum = sum;
			max_left = i;
		}
	}
	l_sum = -10000;
	int sum = 0;
	int max_right=0;
	for(int i =mid+1 ;i<=high;i++) {
		sum += a[i];
		if (sum > r_sum) {
			r_sum = sum;
			max_right = i;
		}
	}
	
}
int main()
{
	
}
