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

int diameter (TreeNode* root){

    if (root == NULL) return NULL;

    int leftheight = diameter(root-> left);
    int rightheight = diameter(root->right);

    return 1+ max(leftheight, rightheight);
}

    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL) return NULL;

        int leftDiam = diameterOfBinaryTree(root-> left);
        int rightDiam = diameterOfBinaryTree(root-> right);
        int current = diameter(root-> left) + diameter(root-> right);

        return max((current), max(leftDiam, rightDiam));



       
    }
};
