// Source : https://leetcode.com/problems/binary-tree-preorder-traversal/
// Author : lzr
// Date   : 2015-04-07

/**
Given a binary tree, return the postorder traversal of its nodes' values.

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
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> postTra;
        postOrder(root, postTra);
        return postTra;
    }

    void postOrder(TreeNode *T, vector<int> &postTra){
        if(T){
            postOrder(T->left, postTra);   // �ȱ���������
            postOrder(T->right, postTra);  // �ٱ���������
            postTra.push_back(T->val);   // ��postTra����������Ӹ��������
        }
    }
};

// Iterative Solution
