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

        int goodValues=0;


    int goodNodes(TreeNode* root) {
        

        if (!root) return 0;


        findLocalMax(root, INT_MIN);

        return goodValues;

    }

    void findLocalMax(TreeNode* root, int curmax)
    {
        if(!root) return;
        
        curmax = max(curmax,root->val);

        if(curmax == root->val) goodValues++;

        if(root->left == nullptr && root->right == nullptr ) 
        {
            return;
        }

        if(root->left != nullptr) findLocalMax(root->left,curmax);

        if(root->right != nullptr) findLocalMax(root->right, curmax);

    }

};
