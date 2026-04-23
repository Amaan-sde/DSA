class Solution {
public:
    int BS(vector<int>nums, int target , int s, int e){
        int mid=s+(e-s)/2;
        if(s>e){
            return -1;
        }
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
           return BS(nums,target,s=mid+1, e);
        }
        else{
            return BS(nums,target,s, e=mid-1);
        }
      
    }
    int search(vector<int>& nums, int target) {
        return BS(nums,target ,0, nums.size()-1);
    }
};