// Source : https://leetcode.com/problems/minimum-depth-of-binary-tree/
// Author : lzr
// Date   : 2015-04-05

/**
Given a binary tree, find its minimum depth.
The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

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
    int minDepth(TreeNode *root) {
        if(!root) return 0;     // 空树
        if(!root->left && root->right)      // 若左子树为空，右子树不为空
            return minDepth(root->right)+1; // 返回左子树的最短路径+1
        if(!root->right && root->left)      // 同理
            return minDepth(root->left)+1;
        return min(minDepth(root->left), minDepth(root->right))+1;
        // 左右都为空或都不为空时，递归子树+1
    }
};

