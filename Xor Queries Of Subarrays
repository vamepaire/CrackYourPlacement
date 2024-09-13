class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> prefix(n, 0);
        vector<int> res;
        prefix[0] = arr[0];
        for (int i = 1; i < n; ++i) {
            prefix[i] = prefix[i - 1] ^ arr[i];
        }
        for (auto q : queries) {
            int start = q[0];
            int end = q[1];

            if (start == 0) {
                res.push_back(prefix[end]); 
            } else {
                res.push_back(prefix[end] ^ prefix[start - 1]);
            }
        }

        return res;
    }
};
