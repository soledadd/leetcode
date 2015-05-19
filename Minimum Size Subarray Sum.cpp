class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        if(nums.empty()) return 0;
        int start = -1, sum = nums[0], minLen = INT_MAX;
        bool flag = false;
        if(sum >= s){
            start = 0;
            flag = true;
            minLen = 1;
        }
        for(int i = 1; i < nums.size(); i++){
            sum += nums[i];
            if(sum >= s){
                if(flag == false){
                    start = 0;
                    flag = true;
                }
                while(sum-nums[start] >= s) sum -= nums[start++];
                minLen = min(i-start+1, minLen);                
            }
        }
        if(start == -1) return 0;
        else return minLen;
    }
}

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int num_len= nums.size();
        int left=0, right=0, total=0, min_len= num_len+1;
        while (right < num_len) {
            // move right silder forward till total >= s
            do { total += nums[right++]; } while (right<num_len && total< s);
            // move left slider forward while maintaining total >= s
            while (left<right && total-nums[left]>=s) total -= nums[left++];
            // record if it's the minimum
            if (total>=s && min_len> right- left) 
                min_len= right- left;
        }
        return min_len<=num_len ? min_len: 0;
    }
};
