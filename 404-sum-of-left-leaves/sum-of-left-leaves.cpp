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
        stack<TreeNode*>s;
        int sum=0;
        s.push(root);
        while(!s.empty())
        {
           TreeNode* node=s.top();
           s.pop();
           if(node->left && !node->left->left && !node->left->right)
           {
            sum+=node->left->val;
           }
           if(node->right)s.push(node->right);
           if(node->left)s.push(node->left);
           
        }
        return sum;


    }
};