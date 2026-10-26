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
    int pre_idx = 0;
    unordered_map<int, int> in_map;

    TreeNode* build(vector<int>& preorder, int in_left, int in_right) {
        if (in_left > in_right) return nullptr;

        int root_val = preorder[pre_idx++];
        TreeNode* root = new TreeNode(root_val);

        int mid = in_map[root_val];

        root->left = build(preorder, in_left, mid - 1);
        root->right = build(preorder, mid + 1, in_right);

        return root;
    }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       
        for (int i = 0; i < inorder.size(); ++i) {
            in_map[inorder[i]] = i;
        }
        return build(preorder, 0, inorder.size() - 1);
    }
};