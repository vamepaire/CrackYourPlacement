class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int ,int> mpp;
        vector<int> v;
        for(int i = 0; i < nums.size(); i++)
        {
            mpp[nums[i]]=i;
        }
        for(int i = 0;i < nums.size(); i++)
        {
            int sub = target - nums[i];
            if(mpp.find(sub) != mpp.end() && mpp.find(sub)->second!=i) return {i,mpp.find(sub)->second};
        }
        return {-1,-1};
    }
};
