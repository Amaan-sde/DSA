class Solution {
public:
    void sub(vector<int>&nums , int index , vector<int>temp , vector<vector<int>>&ans , int size){
        if(index == size){
            ans.push_back(temp);
            return;
        }
        sub(nums, index+1, temp, ans , size);
        temp.push_back(nums[index]);
        sub(nums, index+1, temp, ans , size);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        int index = 0;
        int size = nums.size();
        sub(nums , index , temp , ans , size);
        return ans;
    }
         
};