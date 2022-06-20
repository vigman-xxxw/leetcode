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
    #define maxn 500005
    int val[maxn];
    int n;
    void inorder(struct TreeNode* root){
        if(root){
            inorder(root->left);
            val[n++] = root->val; //利用二叉树中序遍历
            inorder(root->right);
        }
    }
public:
    int kthLargest(TreeNode* root, int k) {
        n = 0;
        inorder(root);
        return val[n-k];
    }
};