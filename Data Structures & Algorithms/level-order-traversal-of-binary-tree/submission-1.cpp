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
    
   


//     vector<vector<int>> levelOrder(TreeNode* root) {

//         vector<vector<int>> res;

//         if (root == NULL) return res;



//         queue<TreeNode*> q;
//         q.push(root);

        
        

//         while(!q.empty()){
            
//             int size = q.size();
//             vector<int> level;
//             for (int i = 1; i<=size; i++){
//                 TreeNode *node = q.front();
//                 q.pop();

//                 level.push_back(node->val);

//                 if (node->left != NULL) q.push(node->left);
//                 if (node->right != NULL) q.push(node->right);
//                 // level.push_back(node -> val);
                

//             }
//             res.push_back(level);

//         }
//         return res;


    class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        // This will store the final result — a list of levels,
        // where each level is a vector of node values
        vector<vector<int>> res;

        // If the tree is empty, just return an empty result
        if (root == NULL) return res;

        // Create a queue to perform BFS (Breadth-First Search)
        queue<TreeNode*> q;

        // Start with the root node
        q.push(root);

        // Continue until all nodes are processed
        while (!q.empty()) {

            // 'size' stores the number of nodes in the current level
            int size = q.size();

            // A vector to store values of the current level
            vector<int> level;

            // Process each node in this level
            for (int i = 1; i <= size; i++) {

                // Get (and remove) the front node from the queue
                TreeNode* node = q.front();
                q.pop();

                // Store the node's value in the current level
                level.push_back(node->val);

                // If the node has a left child, add it to the queue
                if (node->left != NULL) 
                    q.push(node->left);

                // If the node has a right child, add it to the queue
                if (node->right != NULL) 
                    q.push(node->right);
            }

            // After finishing one level, add it to the final result
            res.push_back(level);
        }

        // Return the list of all levels
        return res;
    }
};

        

