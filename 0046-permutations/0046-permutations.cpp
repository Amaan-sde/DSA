class Solution {
public:
void solve(vector<vector<int>>&ans , vector<int>&nums , int i , int n ){
    if(i==n){
        ans.push_back(nums);
        return;
    }
    for(int j=i;j<n;j++){
        swap(nums[i] , nums[j]);
        solve(ans , nums ,i+1 , n);
        swap(nums[i] , nums[j]);

    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        int i = 0;
        solve(ans , nums , i , n);
        return ans;
    }
};