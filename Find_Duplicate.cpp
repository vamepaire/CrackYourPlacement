class Solution {
public:
    int findDuplicate(std::vector<int>& nums) {
        int left = 1;
        int right = nums.size() - 1;
        while(left <= right)
        {
            int mid = left+(right - left)/2;
            int count = 0;

            for(auto it : nums)
            {
                if(it <= mid) count++;
            }
            if(count > mid) right = mid -1;
            else left = mid + 1;
        }
        return left ;
    }
};
