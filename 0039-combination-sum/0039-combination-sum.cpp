class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int>& temp,
               vector<int>& candidates, int i, int sum,
               int target, int n) {

        if(sum == target) {
            ans.push_back(temp);
            return;
        }

        if(i >= n || sum > target) {
            return;
        }

        solve(ans, temp, candidates, i + 1, sum, target, n);

        temp.push_back(candidates[i]);

        solve(ans, temp, candidates, i,
              sum + candidates[i], target, n);

        temp.pop_back();
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;

        int n = candidates.size();

        solve(ans, temp, candidates, 0, 0, target, n);

        return ans;
    }
};