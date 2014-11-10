#incldue<iostream>
using namespace std;
bool isValid(string s) {
	int l = s.size();
	if (l == 1) return false;
	string tmp;
	int x = -1;
	tmp[++x] = s[0];
	for (int i = 1; i < l;i++) {
		if (x == -1|| s[i] == '(' ||s[i] == '{' || s[i] == '[' ) {
			tmp[++x] = s[i];
		}
		else if (tmp[x]=='(' && s[i]==')' || tmp[x]=='[' && s[i]==']' ||tmp[x]=='{' && s[i]=='}' ) {
			--x;
		} else {
			return false;
		}
	}
	if (x != -1) return false;
	return true;
}
int main()
