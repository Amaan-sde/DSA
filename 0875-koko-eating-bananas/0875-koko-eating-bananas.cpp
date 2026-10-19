class Solution {
public:
bool isPossible(vector<int> &nums, int n, int h, int mid) {
    long long ans = 0;

    for (int i = 0; i < n; i++) {
        ans += nums[i] / mid;

        if (nums[i] % mid != 0) {
            ans++;
        }
    }

    if (ans <= h) {
        return true;
    }

    return false;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin() , piles.end());
        int n = piles.size();
        int s = 0;
        int maxi=-1;
        for(int i =0;i<n; i++){
            maxi = max(maxi,piles[i]);
        }
        int e=maxi;
        int mid = s+(e-s)/2;
        int ans = -1;
        while(s<=e){
            
            if(isPossible(piles , n , h , mid)){
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