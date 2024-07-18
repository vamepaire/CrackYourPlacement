class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int current_sum = 0;

        for (int i = 0; i < k; i++) {
            current_sum += cardPoints[i];
        }

        int max_sum = current_sum;
        for (int i = 0; i < k; i++) {
            current_sum -= cardPoints[k - 1 - i];
            current_sum += cardPoints[n - 1 - i]; 
            max_sum = max(max_sum, current_sum);
        }

        return max_sum;
    }
};
