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
    int prev=0;
    void f(TreeNode* root){

        if(!root) return;
        f(root->right);
        prev+=root->val;
        root->val=prev;
        f(root->left);

    }
    TreeNode* convertBST(TreeNode* root) {
        f(root);
        return root;
    }
};
