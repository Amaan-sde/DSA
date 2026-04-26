class Solution {
public:
   void sub(vector<vector<int>>&ans,vector<int> temp, vector<int> nums, int index, int size){
        if(index==size){
            ans.push_back(temp);
            return;
        }
        sub(ans,temp,nums,index+1,size);
        temp.push_back(nums[index]);
        sub(ans,temp,nums,index+1,size);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>>ans;
         vector<int>temp;
         sub(ans, temp, nums, 0, nums.size());
         return ans;
    }
};