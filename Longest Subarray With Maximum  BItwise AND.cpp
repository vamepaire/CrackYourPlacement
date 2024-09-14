class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int j = 0, length = 0, current_length = 0;
        
        while (j < nums.size()) {
            if (nums[j] == maxi) {
                current_length++;
            } else {
                current_length = 0;
            }
            length = max(length, current_length);
            j++;
        }
        return length;
    }
};
