// Source : https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
// Author : lzr
// Date   : 2015-04-08

/**
Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// Recursion Solution
class Solution {
public:
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        vector<vector<int> > levelBTra;
        levelOrderBTraversal(root, levelBTra, 0);
        reverse(levelBTra.begin(), levelBTra.end());    // 正序遍历后用reverse首尾交换
        return levelBTra;
    }
    void levelOrderBTraversal(TreeNode *T, vector<vector<int> > &levelBTra, int level) {
        if(!T) return;
        if(level+1 > levelBTra.size())
            levelBTra.push_back(vector<int>());
        levelBTra[level].push_back(T->val);
        levelOrderBTraversal(T->left, levelBTra, level+1);
        levelOrderBTraversal(T->right, levelBTra, level+1);
    }
};
