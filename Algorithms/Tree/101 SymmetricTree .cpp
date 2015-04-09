// Source : https://leetcode.com/problems/symmetric-tree/
// Author : lzr
// Date   : 2015-04-06

/**
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).
Bonus points if you could solve it both recursively and iteratively.

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

    bool isSymmetric(TreeNode *root) {
        if(!root) return true;
        return cmpTree(root->left, root->right);
    }

    bool cmpTree(TreeNode *p, TreeNode *q) {        // 比较两树是否对称
        if((!p && q) || (p && !q)) return false;    // 一空一不空，返回f
        if(!p && !q) return true;                   // 两树都空，返回t
        return p->val==q->val && cmpTree(p->left, q->right) && cmpTree(p->right, q->left);
        // 对称：p左=q右，p右=q左
    }
};

