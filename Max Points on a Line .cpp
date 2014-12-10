#include<iostream>
#include<map>
#include<climit>
using namespace std;
int maxPoints(vector<Point> &points) {
  int l = points.size();
  if (l<=2) return l;
  int max = 0;
  for (int i = 0; i < l;i++) {
    int add = 1;
    map<double,int> mp;
    for (int j = 0; j < l;j++) {
      if (i == j) {
        continue;
      }
      if (points[i].x == points[j].x && points[i].y == points[j].y) {
        add++;
        continue;
      }
      double s = points[i].x == points[j].x?INT_MAX : (double)(points[j].y - points[i].y)/(points[j].x - points[i].x); 
      mp[s]++;
    }
    if(mp.size()==0) {
      mp[INT_MIN] =0;
    }
    map<double,int>::iterator it = mp.begin();
    for (;it != mp.end();it++) {
      if (it->second + add > max) {
        max = it->second + add;
      }
    }
  }
  return max;
}
