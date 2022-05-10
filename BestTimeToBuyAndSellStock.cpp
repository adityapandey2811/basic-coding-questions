//1st on leetcode (I)
int maxProfit(vector<int>& prices) {
        int i, buy = prices[i], maxDiff = 0;
        for(i=1;i<prices.size();i++){
            if(buy>prices[i])
                buy = prices[i];
            else
                maxDiff = max(maxDiff,prices[i] - buy);
        }
        return maxDiff;
    }
//@nd on leetcode (II)
int maxProfit(vector<int>& prices) {
        int i, buy = prices[i], totalDiff = 0;
        for(i=1;i<prices.size();i++){
            if(buy>prices[i])
                buy = prices[i];
            else if(prices[i] - buy > 0){
                totalDiff += prices[i] - buy;
                buy = prices[i];
            }
        }
        return totalDiff;
    }
