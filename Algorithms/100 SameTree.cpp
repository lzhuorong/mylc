// Source : https://leetcode.com/problems/same-tree/
// Author : lzr
// Date   : 2015-04-05

/**
Given two binary trees, write a function to check if they are equal or not.// Two binary trees are considered equal if they are structurally identical and the nodes have the same value.

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
    bool isSameTree(TreeNode *p, TreeNode *q) {

        if(!p && !q)        // 若两树均为空
            return true;    // 则认为same
        if(p != NULL && q != NULL && p->val == q->val)                              // 若两树均不为空且根节点相等
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);    // 递归判断左右子树
        else
            return false;
    }
};
