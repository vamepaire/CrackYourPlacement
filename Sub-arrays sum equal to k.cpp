class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int prefix_sum = 0;
        int count = 0;
        map<int ,int> mpp;
        mpp[0] = 1;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            prefix_sum +=nums[i];
            int remove = ((prefix_sum % k) + k) % k;
            if(mpp.find(remove) != mpp.end()) count += mpp[remove];
           
            mpp[remove] += 1;
        }
    return count ;
    }
};
