// Source : https://leetcode.com/problems/path-sum/
// Author : lzr
// Date   : 2015-04-06

/**
Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

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
    bool hasPathSum(TreeNode *root, int sum) {
        if(!root) return false;             // 空树
        if(!root->left && !root->right)     // 无子树时，递归终止
            return root->val == sum ? true : false;
        return hasPathSum(root->left, sum-root->val) || hasPathSum(root->right, sum-root->val);
        // 递归判断，每次sum值-当前节点值
    }
};
