class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPrice=0, minPrice=prices[0];
        for(int i:prices){
            maxPrice = max(maxPrice, i-minPrice);
            minPrice = min(minPrice, i);
        }
        return maxPrice;
    }
};
