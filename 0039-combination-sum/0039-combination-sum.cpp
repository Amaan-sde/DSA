class Solution {
public:
set<vector<int>> s;
    void solve(vector<vector<int>>&ans , vector<int>&temp , int target , vector<int>&candidates , int size, int index){
        if(index == size || target<0){
            return;
        }
        if(target == 0)
        {
            if(s.find(temp) == s.end()){
                ans.push_back(temp);
                s.insert(temp);
            }
            
            return;
        }
        
        temp.push_back(candidates[index]);
        solve(ans , temp , target-candidates[index] ,candidates,size ,index+1);
        solve(ans , temp , target-candidates[index] ,candidates,size ,index);
        temp.pop_back();
        solve(ans , temp , target,candidates,size ,index+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>ans;
        solve(ans,temp,target,candidates,candidates.size(),0);
        return ans;
    }
};