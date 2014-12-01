#include<iostream>
using namespace std;
#include<string>
bool isAlphanumeric(char ch) {
	if (ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9' || ch >= 'A' && ch <= 'Z') return true;
	return false;	
}
bool isPalindrome(string s) {
    if(s.length() == 0) return true;
    int i = 0;
    int j = s.length() - 1;
    while (i < j) {
        if (!isAlphanumeric(s[i])) {
            i++;
        } else if (!isAlphanumeric(s[j])) {
            j--;
        } else if ( tolower(s[i]) == tolower(s[j])) {
            i++;
            j--;
        } else {
            return false;
        }
    }
    return true;
}
    

int main()
{
	string s = "aSd,,,,sa";
	cout<<isPalindrome(s);
}
