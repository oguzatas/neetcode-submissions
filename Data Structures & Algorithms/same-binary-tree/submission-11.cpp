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
int flag = 0;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        yolo(p,q);
        return flag != -1;

    }

    int yolo(TreeNode* p, TreeNode* q) {
        
         if(p == nullptr && q == nullptr) return 1;

        if(p==nullptr || q == nullptr) 
        {
            flag = -1;
            return -1;
        }
        

        

        if(p->val != q->val) {
        flag = -1;
        return -1; 
        }

        yolo(p->left,q->left);
        if(flag == -1) return -1;
        yolo(p->right,q->right);
        if(flag == -1) return -1;

        return 1;
    }
};
