#include<iostream>
using namespace std;
int titleToNumber(string s) {
  int  l = s.length();
  int res = 0;
  for (int i = 0;i < l;i++) {
    res = res * 26 + s[i] - 'A' + 1;
  }
  return res;
}
int main()
{
  string s = "Z";
  cout<<titleToNumber(s);
}
