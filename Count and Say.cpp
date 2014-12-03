#include<iostream>
using namespace std;
#include<string.h>
#include<malloc.h>
string cuntAndSay(int n) {
	if (n == 1) return "1";
	string s="1";
	int x = 0;	
	for(int i = 1;i <n;i++) {
		int l = s.size();
		char *tmp;
		tmp = (char*)malloc(sizeof(char)*2*l);
		for(int j=0;j < l;) {
			char d;
			d = s[j];
			int count=0;
			while(d == s[j]&& j < l) {
				count++;
				j++;
			}
			char w = count+'0';
			tmp[x++] = w;
			tmp[x++] = d;
		}
		tmp[x]='\0';
		x = 0;
	//	cout<<tmp<<endl;;
		s = tmp;
		free(tmp);
	//	cout<<s<<endl;
	}
	return s;
}
int main()
{
	
cout<<cuntAndSay(12);
}
