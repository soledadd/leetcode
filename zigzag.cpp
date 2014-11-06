#include<iostream>
#include<string>
#include <string.h>
using namespace std;
string convert(string s,int nRows) {
	int l = s.length();
	char res[30000];
	int n = nRows;
	if (l <= n||nRows == 1) {
		return s;
	}
	int step = 4 + (nRows-3)*2;
	int k = 0;
	for (int j =0;j<l;j += step ) {
		res[k++] = s[j];
	}
	for (int i = 1; i < nRows - 1;i++) {
		int stepi = step - i*2;
		for (int j = i;j<l;) {
			res[k] = s[j];
			k++;
			if (j != i) {
				int m = step - stepi;
				stepi = m>0?m:0-m;
			}
			j += stepi;
		}
	}
	for (int j =nRows - 1;j<l;j+=step ) {
		res[k++] = s[j];
	}
	res[l] ='\0';
	return res;
}
int main()
{
	string text ="ABC";
	string res = convert(text,2);
	//string res = text;
/*	for (int i = 0;i < 10;i++) {
		cout<<res[i];
			}*/
			cout<<res;
}
