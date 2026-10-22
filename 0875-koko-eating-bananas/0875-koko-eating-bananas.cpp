class Solution {
public:
bool isPossible(vector<int>nums , int h , int mid){
    long long ans = 0;
    for(int i =0;i<nums.size();i++){
       ans += (nums[i] + mid -1)/mid;
    }
    
    if(ans <=h){
        return true;
    }
    return false;
}
    int minEatingSpeed(vector<int>& piles, int h) {
       int s = 1;
       int maxi = -1;
       for(int i =0;i<piles.size();i++){
        maxi = max(maxi , piles[i]);
       } 
       int e = maxi;
       int ans = -1;
       int mid = s+(e-s)/2;
       while(s<=e){
        if(isPossible(piles , h , mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
       }
       return ans;
    }
};