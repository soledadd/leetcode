class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int l = nums.size();
        if (l == 1 || l == 0) return false;
        sort(nums.begin(),nums.end());
        int num = 1;
        int tmp = nums[0];
        for (int i = 1; i < l;i++) {
        	if (nums[i] == tmp) {
        		num++;
        	} else {
        		tmp = nums[i];
        		num = 1;
        	}
        	if (num == 2) return true;
        }
        return false;
    }
};
