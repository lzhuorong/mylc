// Source : https://leetcode.com/problems/maximum-depth-of-binary-tree/
// Author : lzr
// Date   : 2015-04-05

/**
Given a binary tree, find its maximum depth.
The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    int maxDepth(TreeNode *root) {
        if(!root) return 0;     // 空树
        return max(maxDepth(root->left),maxDepth(root->right))+1;
        // 递归，树的最大深度=子树最大深度+1
    }
};
