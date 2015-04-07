// Source : https://leetcode.com/problems/binary-tree-level-order-traversal/
// Author : lzr
// Date   : 2015-04-07

/**
Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// Recursive Solution
class Solution {
public:
    vector<vector<int> > levelOrder(TreeNode *root) {
        vector<vector<int> > levelTra;
        levelOrderTrav(root, levelTra, 0);
        return levelTra;
    }

    void levelOrderTrav(TreeNode *T, vector<vector<int> > &levelTra, int level) {
        if(!T) return;
        if (level+1 > levelTra.size())          // 若当前遍历层次比levelTra数组size大
            levelTra.push_back(vector<int>());  // 在数组里面加一行
        levelTra[level].push_back(T->val);      // 将元素加入与当前层次对应的数组行中
        levelOrderTrav(T->left, levelTra, level+1);
        levelOrderTrav(T->right, levelTra, level+1);
    }
};
