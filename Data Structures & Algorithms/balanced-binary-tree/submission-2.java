/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

class Solution {
    boolean ans = true;
    public boolean isBalanced(TreeNode root) {
        // return dfsHeight(root) != -1;
        dfsHeight(root);
        return ans;


    }
    private int dfsHeight(TreeNode node) {
        if (node==null) return 0;

    int lefth = dfsHeight(node.left);
    // if (lefth == -1) return -1;

    int righth = dfsHeight(node.right);
    // if (righth == -1) return -1;

    if (Math.abs(lefth-righth) >1){
    ans = false;
    }

    return Math.max(lefth,righth)+1;
    }
}
