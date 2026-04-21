class Solution {
public:
int firstOcc(vector<int>& nums,int target){
            int n=nums.size();
        int s=0,e=n-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }
            else if(target>nums[mid]){
                s=mid+1;
            }
            else if(target<nums[mid]){
                e=mid-1;
            }

            mid=s+(e-s)/2;

        }
        return ans;
        }
int lastOcc(vector<int>& nums,int target){
            int n=nums.size();
        int s=0,e=n-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(nums[mid]==target){
                ans=mid;
                s=mid+1;
            }
            else if(target>nums[mid]){
                s=mid+1;
            }
            else if(target<nums[mid]){
                e=mid-1;
            }

            mid=s+(e-s)/2;

        }
return ans;

}

    vector<int> searchRange(vector<int>& nums, int target) {
       int firstIdx=firstOcc(nums,target);
       int lastIdex=lastOcc(nums,target);
       vector<int> result;
       result.push_back(firstIdx);
       result.push_back(lastIdex);

       return result;    
    }
};