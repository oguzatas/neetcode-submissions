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
    vector<int> rightSideView(TreeNode* root) {
        
        queue<TreeNode*> q;
        q.push(root);
        vector<int>rightview;

        if (!root) return rightview;

        while(!q.empty())
        {   

            int sizeq = q.size();

            for(int i=0;i<sizeq;i++)
            {
                TreeNode* current = q.front();
                q.pop();

                if(i == sizeq -1) rightview.push_back(current->val);

                if(current->left) q.push(current->left);
                if(current->right) q.push(current->right);


            }

        }
        return rightview;
    }
};
