/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    #define INIT 32432432
    int pre;
    bool flag;
    void inorder(TreeNode* root){
        if(root){
            inorder(root->left);
            if(pre != INIT && root->val <= pre){
                flag = false;
            }
            pre = root->val;
            inorder(root->right);
        }
    }

public:
    bool isValidBST(TreeNode* root) {
        pre = INIT; //二叉树的中序遍历
        flag = true;
        inorder(root);
        return flag;
    }
};