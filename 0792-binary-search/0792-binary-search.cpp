class Solution {
public:
int bs (vector<int>& nums,int tar, int st , int end ){
    int mid = st +(end-st)/2;
    if(st<=end){
        if(nums[mid] == tar){
            return mid;
        }

        else if(nums[mid] <= tar){
            return bs(nums , tar, mid+1 , end );
        }

        else{
            return bs(nums , tar, st , mid-1 );
        }

    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        return bs(nums , target , 0 , nums.size()-1);
        
    }
};