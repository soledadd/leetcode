#include<iostream>
using namespace std;
string convertToTitle(int n) {
     int tmp[20];
     int x = -1;
     while (n!=0) {
       tmp[++x] = (n-1)%26;
       n = (n-1)/26;
     }
    char res[20];
    char *t = res;
    int i;
    for(i = 0; x>=0;x--) {
      char s = (char)(tmp[x] + 'A');
      res[i++] = s;
    }
    res[i] = '\0';
    return t;    
}
int main()
{
  int n = 52;
  cout<<convertToTitle(n);
}
