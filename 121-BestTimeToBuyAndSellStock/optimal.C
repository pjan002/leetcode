class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0, sell=1, maxPrice=0;
        while(sell<prices.size()){
            maxPrice = max(maxPrice, prices[sell]-prices[buy]);
            if(prices[sell]<prices[buy]) buy = sell;
            else sell++;
        }
        return maxPrice;
    }
};
