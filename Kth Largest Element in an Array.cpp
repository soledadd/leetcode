class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int length = nums.size();
        if (length == 1) {
        	return nums[0];
        }
        vector<int> left;
        vector<int> right;
        
        for(int i = 1;i < length;i++) {
        	if (nums[i] > nums[0]) {
        		right.push_back(nums[i]);
        	} else {
        		left.push_back(nums[i]);
        	}
        }
        length = right.size();
        
        if (length >=k) {
        	return findKthLargest(right,k);
        } else if(length == k-1) {
        	return nums[0];
        } else {
        	return findKthLargest(left,k-length-1);
        }
    }
};


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int L = 0, R = nums.size() - 1;
        while (L < R) {
            int left = L, right = R;
            int key = nums[left];
            while (left < right) {
                while (left < right && nums[right] < key) --right;
                nums[left] = nums[right];
                while (left < right && nums[left] >= key) ++left;
                nums[right] = nums[left];
            }
            nums[left] = key;
            if (left == k - 1) return nums[k - 1];
            else if (left > k - 1) R = left - 1;
            else L = left + 1;
        }
        return nums[k - 1];
    }
};
