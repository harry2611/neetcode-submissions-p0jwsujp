/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *l;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
   

// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         inorder(root);
//         return res;
//     }

// private:
//     void inorder(TreeNode* node) {
//         if (node == nullptr ) {
//             return ;
//         }
//         // res.push_back(node->val);
//         inorder(node->left);
//         res.push_back(node->val);    
//         inorder(node->right);
//     }

   
    public:
    vector<int> res;
    vector<int> inorderTraversal(TreeNode* root) {

         if (root == NULL ) {
            return res;
        }
        // res.push_back(node->val);
        inorderTraversal(root->left);
        res.push_back(root->val);    
        inorderTraversal(root->right);


        // inorderTraversal(root);
        return res;
    }
};