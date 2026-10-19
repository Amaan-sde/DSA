class Solution {
public:
bool isPossible(vector<int> nums, int n, int h, int mid) {
    long long ans = 1;
    int weightCount = 0;
    for (int i = 0; i < n; i++) {
        if(weightCount + nums[i] <= mid){
            weightCount+=nums[i];
        }
        else{
            ans++;
            if(ans>h || nums[i]> mid){
                return false;
            }
            weightCount=nums[i];
        }
    }

    return true;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int s = 0;
        int maxi=0;
        for(int i =0;i<n; i++){
            maxi+=weights[i];
        }
        int e=maxi;
        int mid = s+(e-s)/2;
        int ans = -1;
        while(s<=e){
            
            if(isPossible(weights , n , days , mid)){
                ans = mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
};