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
        if (level+1 > levelTra.size())          // ����ǰ������α�levelTra����size��
            levelTra.push_back(vector<int>());  // �����������һ��
        levelTra[level].push_back(T->val);      // ��Ԫ�ؼ����뵱ǰ��ζ�Ӧ����������
        levelOrderTrav(T->left, levelTra, level+1);
        levelOrderTrav(T->right, levelTra, level+1);
    }
};
