#include<iostream>
#include<string.h>
using namespace std;
int strStr(char *haystack, char *needle) {
     int length_a = strlen(haystack);
        int length_b = strlen(needle);
        if(length_a < length_b)
            return -1;
        if(length_a == length_b){
            if(strcmp(haystack, needle)==0)
                return 0;
            return -1;
        }
        int i,j;
        for(i=0; i<=length_a-length_b; ++i)
		{
		    bool flag = true;
            for(j=0; j<length_b; ++j)
            {
                if(haystack[i+j] != needle[j])
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                return i;
               
		}
		return -1;
}
int main()
{
	char s[50]="mississippi";
	char d[50]="a";
	cout<<strStr(s,d);
}
