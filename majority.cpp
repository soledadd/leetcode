#include<iostream>
#include<vector>
#include<string.h>
#include<map>
using namespace std;
int majorityElement(vector<int> &num) {
    int maj;
    int count = 0;
    int n = int(num.size());
    for (int i = 0; i < n; i++){
        if (count == 0){
            maj = num[i];
            count++;
        }
        else if (num[i] == maj){
            count++;
            if (count > n/2) return maj;
        }
        else count--;
    }
    return maj;
}
int mian()
{
  cout<<"123"<<endl;
}
