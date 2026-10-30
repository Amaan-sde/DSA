class Solution {
public:
    int solve(vector<int>& nums, int target , int i , int sum){
        if(i==nums.size()){
            if(sum == target){
                return 1;
            }
            return 0;
        }
        int x = solve(nums , target , i+1 , sum+nums[i]);

        int y = solve(nums , target , i+1 , sum-nums[i]);

        return x+y;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int ans = solve(nums , target , 0 ,0);
        return ans;
    }
};