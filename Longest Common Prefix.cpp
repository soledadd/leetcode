#include<iostream>
#include<string>
#include<vector>
using namespace std;
string longestCommonPrefix(vector<string> &strs) {
	int l = strs.size();
	if (l == 0) return "";
	string res = strs[0];
	if (res == "") return "";
	for (int i = 1;i < l;i++) {
		if (strs[i] == ""||res == "") return "";
		int maxl = strs[i].size() > res.size()?res.size():strs[i].size();
		int j;
		for (j = 0 ;j < maxl;j++) {
			if (res[j] != strs[i][j]) break;
		}
		res = strs[i].substr(0,j);
	}
	return res;
}

int main()
{
}
