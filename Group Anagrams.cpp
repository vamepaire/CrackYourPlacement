class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(auto w:strs)
        {
            string s=w;
            sort(s.begin(),s.end());
            mpp[s].push_back(w);
        }
        vector<vector<string>>mp;
        for(auto ans:mpp)
        {
            mp.push_back(ans.second);
        }
        return mp;
    }
};
