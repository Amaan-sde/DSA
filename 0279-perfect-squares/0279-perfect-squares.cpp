
class Solution {
public:
    int solve(int n, vector<int>& dp) {
        if (n == 0) {
            return 0;
        }

        if (dp[n] != -1) {
            return dp[n];
        }

        int ans = INT_MAX;
        int end = sqrt(n);

        for (int i = 1; i <= end; i++) {
            int ps = i * i;
            int x = 1 + solve(n - ps , dp);

            ans = min(ans, x);
        }

        return dp[n] = ans;
    }

    int numSquares(int n) {
        vector<int> dp(n + 1, -1);
        return solve(n, dp);
    }
};
