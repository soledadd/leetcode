#include<iostream>
using namespace std;

//INT_MAX (2147483647) or INT_MIN (-2147483648)
bool isPalindrome(int x) {
	if (x < 0) return false;
        int a[15];
    	int l = 0;
    	while (x!=0) {
    		a[l++] = x%10;
    		x/=10;
    	}
    	int i,j;
    	for (i = 0,j = l-1;j>=i;j--,i++) {
    		if (a[i]!=a[j]) {
    			return false;
    		}
    	}
    	return true;
    }
int main()
{
	int a = -2147447412;
	if(isPalindrome(a)) {
		cout<<"yes"<<endl;
	} else {
		cout<<"no"<<endl;;
	}
}
