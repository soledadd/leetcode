class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int>> res;
        for(int i = 0;i < numRows;i++) {
            vector<int> a;
            if(i == 0)
                a.push_back(1);
            else {
                for(int j = 0;j <= i;j++) {
                     if(j == 0 || j == i) a.push_back(1);
                    else a.push_back(res[i - 1][j] + res[i - 1][j - 1]);
                }
            }
            res.push_back(a);
        }
        
        return res;
    }
};