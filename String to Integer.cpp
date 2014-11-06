#include<iostream>
#include<string.h>
using namespace std;
int atoi(char *str) {
	int int_max = 2147483647;
	int int_min = -2147483648;
	int l = strlen(str);
	int start = -1;
	for (int i = 0; i< l;i++) {
		if ((str[i]>='0'&&str[i]<='9') || str[i]=='-'||str[i]=='+') {
			start = i;
			break;
		}
		if (str[i] !=' ' && (str[i]<'0'||str[i]>'9')) {
			return 0;
		}
	}
	if (start == -1) {
		return 0;
	}
	int sum = 0;
	if (str[start]!='-') {
		if (str[start + 1] == '-' || str[start + 1]=='+') return 0;;
		for (int i =start;i < l&&str[i]!='.';i++) {
			if (str[i]>='0'&&str[i]<='9') {
				if ((sum > 214748364 && str[i] - '0' > 7) || sum >= 214748365  ) return int_max;
				sum = sum * 10 + str[i] - '0'; 
			} else if(!(str[i]=='+'||str[i]=='-')) {
				break;
			}
		}
		if(sum < 0) {
			return int_max;
		}
		return sum<0?int_max:sum;
	} else {
		if (str[start]=='-') {
			if (str[start + 1] == '+' || str[start + 1]=='-') return 0;
		}
		for (int i =start;i < l&&str[i]!='.';i++) {
			if (str[i]>='0'&&str[i]<='9') {
				if ((sum > 214748364 && str[i] - '0' > 8) || sum >= 214748365  ) return int_min;
				sum = sum * 10 + str[i] - '0'; 
			} else if(!(str[i]=='+'||str[i]=='-')) {
				break;
			}
		}
		sum = -1 * sum;	
		return sum >0?int_min:sum;
	}
}
int main()
{
	 char a[30] = "++2";
	cout<<atoi(a)<<endl;
/*	char b[10]= "0.1234";
	cout<<atoi(b)<<endl;
	char c[10]= "-123.456";
	cout<<atoi(c)<<endl;*/
}
