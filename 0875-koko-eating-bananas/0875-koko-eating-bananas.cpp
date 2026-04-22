class Solution {
public:
    bool possible(int mid, vector<int>& piles, int h){
        long long hours = 0;
        for(int i = 0; i < piles.size(); i++){
            hours += (piles[i] + mid - 1) / mid;
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(possible(mid, piles, h)){
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;    
            }
        }

        return ans;
    }
};