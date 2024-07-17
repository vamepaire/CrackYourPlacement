class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int total_sum = 0;
        int buy = prices[0];
        for(int i = 1 ; i < prices.size() ; i++)
        {
            if(buy > prices[i])
            {
                buy = prices[i];
            }
            else 
            {
                total_sum += prices[i] - buy ;
                buy = prices[i];
            }
        }
        return total_sum ;
    }
};
