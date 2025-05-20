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
    int sumOfLeftLeaves(TreeNode* root) {
       if(root==NULL)return 0;
       queue<TreeNode*>q;
       int sum=0;
       q.push(root);
       while(!q.empty())
       {
        TreeNode* curr=q.front();
        q.pop();
        if(curr->left &&! curr->left->left && !curr->left->right)
        {
            sum+=curr->left->val;
        }
        if(curr->left)q.push(curr->left);
        if(curr->right)q.push(curr->right);
       }
    return sum;


    }
};