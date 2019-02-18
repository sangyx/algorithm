class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP, res = 0;
        int n = prices.size();
        if(n == 0)
            return 0;
        minP = prices[0];
        for(int i = 1; i < n; i++){
            if(prices[i] > minP)
                res = max(prices[i]-minP, res);
            else
                minP = prices[i];
        }
        
        return res;
        
    }
};