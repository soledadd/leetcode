#include<iostream>
#include<string.h>
using namespace std;
int lengthOfLastWord(const char *s) {
	int l = strlen(s)-1;
	while (s[l]==' ' && l>=0) {
		l--;
	}
	if (l ==-1) return 0;
	int length = 0;
	for (int i = l; i>=0;i--) {
		if(s[i]!=' ') {
			length++;
		} else {
			break;
		}
	}
	return length;
}
int main()
{
	
}
