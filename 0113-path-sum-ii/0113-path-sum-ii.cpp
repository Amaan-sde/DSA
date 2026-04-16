/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void path(TreeNode* root, int targetSum, int sum, vector<int>temp,vector<vector<int>>&ans) {

        if (root == NULL) {
            return;
        }
        sum += root->val;
        temp.push_back(root->val);

        if (root->left == NULL && root->right == NULL) {
            if (sum == targetSum) {
                ans.push_back(temp);
            } else {
                return;
            }
        }
        path(root->left, targetSum, sum , temp , ans);
        path(root->right, targetSum, sum, temp , ans);
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum =0;
        vector<int>temp;
        vector<vector<int>>ans;
       path(root , targetSum , sum , temp , ans);
       return ans;
    }
};