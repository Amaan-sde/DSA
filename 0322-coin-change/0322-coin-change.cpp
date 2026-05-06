class Solution {
public:
    int solve(vector<int>&coins , int amount,vector<int>&dp){
           if(amount == 0){
            return 0;
        }
        if(dp[amount] != -1){
            return dp[amount];
        }
        int mini = INT_MAX;
        for(int i=0;i<coins.size(); i++){
            if(amount - coins[i] >= 0){
                int usingRec = solve(coins , amount-coins[i],dp);
                if(usingRec != INT_MAX){
                    int ans = 1 + usingRec;
                    mini = min(ans , mini);
                }
            }
            
        }
        dp[amount] = mini;
        return dp[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = amount;
        vector<int>dp(n+1 , -1);
        int ans = solve(coins , amount,dp);
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};