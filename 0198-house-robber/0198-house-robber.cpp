class Solution {
public:
    // int usingRec(vector<int>&nums , int index){
    //     // base case
    //     if(index>=nums.size()){
    //         return 0;
    //     }
    //     // incluion
    //     int x = nums[index] + usingRec(nums , index+2);
    //     // exclusion
    //     int y = usingRec(nums , index+1);

    //     return max(x,y);
    // }
    int usingDp(vector<int>&nums , int index , vector<int>&dp){
        if(index>=nums.size()){
            return 0;
        }
        if(dp[index] != -1){
            return dp[index];
        }
        // inclusion
        int x = nums[index] + usingDp(nums , index+2 , dp);
        // exclusion
        int y = usingDp(nums , index+1, dp);
        dp[index] = max(x,y);

        return dp[index];

    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1 , -1);
        int ans = usingDp(nums , 0 , dp);
        return ans;
    }
};