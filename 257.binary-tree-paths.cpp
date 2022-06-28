/*
 * @lc app=leetcode id=257 lang=cpp
 *
 * [257] Binary Tree Paths
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void recursetree(vector<string>& ans, TreeNode* root,string curr){
        if(!root->right && !root->left){
            ans.push_back(curr);
        }
        if(root->left) recursetree(ans,root->left,curr+"->"+to_string(root->left->val));
        if(root->right) recursetree(ans,root->right,curr+"->"+to_string(root->right->val));
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(!root){return ans;}
        recursetree(ans,root,to_string(root->val));
        return ans;
    }
};
// @lc code=end

