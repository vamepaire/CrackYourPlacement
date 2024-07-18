class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int>sum_freq;
    sum_freq[0]=1;
    
    int sum=0;
    int count=0;
    
    for (int num:nums) {
        sum+=num;
        if (sum_freq.find(sum-k)!=sum_freq.end()) {
            count+=sum_freq[sum-k];
        }
        sum_freq[sum]++;
    }

    return count;
    }
};
