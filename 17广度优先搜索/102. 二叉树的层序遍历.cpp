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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr){
            return {};
        }
        vector<vector<int> > ret;
        unordered_map<TreeNode*, int> dep;
        queue<TreeNode*> q;

        dep[root] = 0;
        int predep = -1;
        q.push(root);
        while(!q.empty()){
            TreeNode* n = q.front();
            q.pop();

            if(dep[n] != predep){
                ret.push_back({n->val});
                predep = dep[n];
            }else{
                ret.back().push_back(n->val); //在ret最后一个数组中 添加元素
            }

            if(n->left){
                dep[n->left] = dep[n] + 1;
                q.push(n->left);
            }
            if(n->right){
                dep[n->right] = dep[n] + 1;
                q.push(n->right);
            }
        }
        return ret;
    }
};