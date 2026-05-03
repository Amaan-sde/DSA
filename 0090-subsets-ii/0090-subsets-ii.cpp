class Solution {
public:
    void sub(vector<vector<int>>& ans, vector<int>& nums, vector<int>& temp, int i) {
        if (i == nums.size()) {
            ans.push_back(temp);
            return;
        }

     
        temp.push_back(nums[i]);
        sub(ans, nums, temp, i + 1);
        temp.pop_back(); 

      
        while (i +1 < nums.size() && nums[i] == nums[i + 1]) {
            i++;
        }

       
        sub(ans, nums, temp, i + 1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        vector<vector<int>> ans;
        vector<int> temp;

        sub(ans, nums, temp, 0); 
        return ans;
    }
};