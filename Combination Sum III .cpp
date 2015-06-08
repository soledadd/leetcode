class Solution {
public:
    vector<vector<int>> helper(int k, int n, vector<int>  nums){
        if(nums.size()<k || nums[0]>n||k==0||n<=0) return {};
        vector<vector<int>> rtn = {};
        for(int i = 0; i < nums.size() && nums[i]<=n;){
            if(k == 1){
                if(nums[i]==n) return {{nums[i]}};
                i++;
            }else{
                int val = nums[i];
                nums.erase(nums.begin()+i);
                vector<vector<int>> temp = helper(k-1, n-val, nums);
                for(int j = 0; j < temp.size(); j++)
                    temp[j].insert(temp[j].begin(),val);
                if(temp.size()!=0) rtn.insert(rtn.end(), temp.begin(), temp.end());
            }
        }
        return rtn;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums = {};
        int i = 1;
        while(i <=9) {nums.push_back(i);i++;}
        return helper(k,n,nums);
    }
};
