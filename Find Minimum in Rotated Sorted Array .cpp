#include<iostream>
using namespace std;
int findMin(vector<int> &num) {
	int l = num.size();
	int min,max;
	min = max = num[0];
	for (int i = 1; i < l;i++) {
		if(num[i] > max) {
			max = num[i];
		} else {
			return num[i];
		}
	}
	return min;
}
int main()
{
	
}
