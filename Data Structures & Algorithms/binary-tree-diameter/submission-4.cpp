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

// class Solution {
// public:
// int ans =0;
// int diameter (TreeNode* root){

//     if (root == NULL) return 0;

//     int leftheight = diameter(root-> left);
//     int rightheight = diameter(root->right);
//     ans = max(ans, leftheight + rightheight);

//     return 1+ max(leftheight, rightheight);
// }

//     int diameterOfBinaryTree(TreeNode* root) {

//         diameter(root);
//         // if (root == NULL) return NULL;

//         // int leftDiam = diameterOfBinaryTree(root-> left);
//         // int rightDiam = diameterOfBinaryTree(root-> right);
//         // int current = diameter(root-> left) + diameter(root-> right);

//         // return max((current), max(leftDiam, rightDiam));
//         return ans;



class Solution {
public:
    // This variable will store the maximum diameter found so far.
    // Diameter = longest path between any two nodes in the tree.
    int ans = 0;  

    // Helper function that returns the height of a subtree rooted at 'root'
    // and updates the diameter (ans) at the same time.
    int diameter(TreeNode* root) {

        // Base case: if the node is NULL, height = 0
        if (root == NULL) 
            return 0;

        // Recursively find the height of the left subtree
        int leftheight = diameter(root->left);

        // Recursively find the height of the right subtree
        int rightheight = diameter(root->right);

        // The diameter passing through this node = leftheight + rightheight
        // Update the global diameter (ans) if this path is the longest so far
        ans = max(ans, leftheight + rightheight);

        // Return height of the current node = 1 + max(left, right)
        // This height is used by its parent node to compute diameter
        return 1 + max(leftheight, rightheight);
    }

    // Main function called by the problem
    int diameterOfBinaryTree(TreeNode* root) {

        // Call the recursive helper function to compute height and diameter
        diameter(root);

        // Return the final diameter found
        return ans;
    }
};


       

