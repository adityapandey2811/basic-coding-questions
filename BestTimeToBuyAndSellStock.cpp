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
