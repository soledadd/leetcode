class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;
        string tmp;
        string res;
        int x = 0;
        for (;i>=0&&j>=0; i--,j--) {
        	if (a[i] == '0' && b[i] == '0') {
        		if (tmp[x] == NULL) {
        			tmp[x] = '0';
        		}
        	} else if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1')) {
        		if (tmp[x] == NULL) {
        			tmp[x] = '1';
        		} else if(tmp[x] == '1') {
        			tmp[x+1] = '1';
        			tmp[x] = '0';
        		}
        	} else if (a[i] == '1' && b[i] == 1) {
        		if (tmp[x] == NULL) {
        			tmp[x] = '0';
        			tmp[x+1] = '1';
        		} else if(tmp[x] == '1') {
        			tmp[x+1] = '1';
        			tmp[x] = '1';
        		}
        	}
        	x++;
        }
        int s = i==-1?j:i;
        for (;s>=0;s--) {
        	if (a[s] == '1' && tmp[x] == '1') {
        		tmp[x] = '0';
        		tmp[x+1] = '1';
        	} else if(a[s] == '0') {
        		if (tmp[x] == NULL) {
        			tmp[x] = '0';
        		}
        	} else if (a[s] == '1' && tmp[x] == NULL) {
        		tmp[x] = a[s];
        	}
        	x++;
        }
    }
};
