// Source : https://leetcode.com/problems/balanced-binary-tree/
// Author : lzr
// Date   : 2015-04-05

/**
Given a binary tree, determine if it is height-balanced.
For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.

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
    bool isBalanced(TreeNode *root) {
        if(!root) return true;              // 空树
        int lh = TreeHeight(root->left);    // 计算左子树高度
        int rh = TreeHeight(root->right);   // 计算右子树高度
        if(abs(lh - rh) > 1) return false;  // 不平衡
        return isBalanced(root->left) && isBalanced(root->right);
        // 左右子树均平衡时才为平衡
    }

    int TreeHeight(TreeNode *T) {        // 计算树高度
        if(!T) return 0;
        else return max(TreeHeight(T->left), TreeHeight(T->right))+1;
    }
};
