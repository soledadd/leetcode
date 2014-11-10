class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>s;
        s.push_back(1);
        if (rowIndex  < 0) {
            return s;
        }
        int i = 0;
        while (i < rowIndex) {
            for (int j = s.size() - 1;j > 0;j--) {
                s[j] = s[j-1] + s[j];
            }
            s.push_back(1);
            i++;
        }
        return s;
    }
};