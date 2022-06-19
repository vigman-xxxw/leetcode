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
    vector<int> ret;
    void dfs(TreeNode* root){
        if(root){
            dfs(root->left);
            ret.push_back(root->val);
            dfs(root->right);
        }
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        dfs(root);
        return ret;
    }
};