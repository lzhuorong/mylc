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
        if(!root) return 0;     // ����
        if(!root->left && root->right)      // ��������Ϊ�գ���������Ϊ��
            return minDepth(root->right)+1; // ���������������·��+1
        if(!root->right && root->left)      // ͬ��
            return minDepth(root->left)+1;
        return min(minDepth(root->left), minDepth(root->right))+1;
        // ���Ҷ�Ϊ�ջ򶼲�Ϊ��ʱ���ݹ�����+1
    }
};

