class Solution {
public:
void per(vector<int>& nums , int size , int index, vector<vector<int>>&ans){
    if(index==size){
        ans.push_back(nums);
    }
    for(int i=index;i<size;i++){
        swap(nums[i], nums[index]);
        per(nums,size,index+1,ans);
        swap(nums[i], nums[index]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>>ans;
       per(nums,nums.size(),0,ans);
       return ans;
        
    }
};