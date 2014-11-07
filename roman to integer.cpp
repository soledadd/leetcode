#include<iostream>
#include<string>
using namespace std;

int romanToInt(string s) {
	int a[27];
	a['I'-'A'] = 1;a['X'-'A'] = 10;
	a['C'-'A'] = 100;a['M'-'A'] = 1000;
	a['V'-'A'] = 5;a['L'-'A'] = 50;
	a['D'-'A'] = 500;
	int l = s.length();
	int sum = 0;
	for (int i = 0; i < l-1;i++) {
		if (a[s[i]-'A'] >= a[s[i+1]-'A']) {
			sum += a[s[i]-'A'];
		} else {
			sum += -1 * a[s[i]-'A'];
		}
	}
	return sum + a[s[l-1]-'A']; ;	
}
int main()
{
	string s = "CMXCIX";
	
	cout<<romanToInt(s)<<endl;
}
