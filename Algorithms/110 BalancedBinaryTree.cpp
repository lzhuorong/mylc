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
        if(!root) return true;              // ����
        int lh = TreeHeight(root->left);    // �����������߶�
        int rh = TreeHeight(root->right);   // �����������߶�
        if(abs(lh - rh) > 1) return false;  // ��ƽ��
        return isBalanced(root->left) && isBalanced(root->right);
        // ����������ƽ��ʱ��Ϊƽ��
    }

    int TreeHeight(TreeNode *T) {        // �������߶�
        if(!T) return 0;
        else return max(TreeHeight(T->left), TreeHeight(T->right))+1;
    }
};
