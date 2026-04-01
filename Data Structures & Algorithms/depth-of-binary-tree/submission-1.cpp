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
    int maxDepth(TreeNode* root) {
        
    //    if (root == nullptr) 
    //    return 0;

    //    int leftdep = maxDepth(root->left);
    //    int rightdep = maxDepth(root->right);

    //    return 1+ max(leftdep, rightdep);

       if (root == NULL ) return NULL;

       int depth = 0;


       queue<TreeNode*> q;
       q.push(root);

       while(!q.empty()){
        int size = q.size();
        for (int i = 1; i<= size; i++){
            TreeNode* node = q.front();
            q.pop();

            if (node-> left) q.push(node-> left);
            if (node -> right) q.push (node -> right);


        }
        depth ++;


       }
       return depth;





    }
};


// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//         if (root == nullptr)
//             return 0;

//         int leftDep = maxDepth(root->left);
//         int rightDep = maxDepth(root->right);

//         return 1 + max(leftDep, rightDep);
//     }
// };

