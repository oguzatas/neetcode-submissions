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
        
        vector<vector<int>> lorder;

        if(!root) return lorder;

        queue<TreeNode*> q;

        q.push(root);
        
        while(!q.empty())
        {
        vector<int> inner ;    

        int sizeq = q.size();
         
        for(int i=0; i<sizeq; i++)
        {
            TreeNode* current = q.front();
            q.pop();

            inner.push_back(current->val);

            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
        }
        
        lorder.push_back(inner);
        }

        return lorder;
    }
};
