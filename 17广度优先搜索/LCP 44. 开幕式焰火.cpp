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
public:
    int numColor(TreeNode* root) {
        int hash[1001];
        int cnt = 0;
        queue<TreeNode*> q;
        memset(hash, 0, sizeof(hash));

        q.push(root);
        while(!q.empty()){
            TreeNode* now = q.front();
            q.pop();
            if(now){
                if(!hash[now->val]){
                    hash[now->val] = 1;
                    ++cnt;
                }
                q.push(now->left);
                q.push(now->right);
            }
        }
        return cnt;
    }
};