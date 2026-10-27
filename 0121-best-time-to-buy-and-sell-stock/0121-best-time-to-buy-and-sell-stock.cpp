class Solution {
public:
    void solve(vector<int>&nums , int i , int n , int &maxProfit , int bestBuy){
        if(i==n){
            return;
        }
        if(bestBuy > nums[i]){
            bestBuy = nums[i];
        }
        if((nums[i] - bestBuy)>maxProfit){
            maxProfit = nums[i] - bestBuy;
        }

        solve(nums , i+1 , n , maxProfit , bestBuy);
    }
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int n = prices.size();
        int maxProfit = INT_MIN;
        int bestBuy = INT_MAX;
        solve(prices , i , n , maxProfit , bestBuy);
        return maxProfit;
    }
};