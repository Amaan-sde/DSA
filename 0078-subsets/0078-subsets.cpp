class Solution {
public:
void sub(vector<vector<int>>&ans , vector<int>temp , vector<int>&nums , int n , int index){
    if(index == n){
        ans.push_back(temp);
        return;
    }
    sub(ans , temp , nums , n , index+1);
    temp.push_back(nums[index]);
    sub(ans , temp , nums , n , index+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>temp;
        int n = nums.size();
        sub(ans , temp , nums , n , 0);
        return ans;
    }
};