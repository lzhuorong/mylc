// Source : https://leetcode.com/problems/binary-tree-inorder-traversal/
// Author : lzr
// Date   : 2015-04-07

/**
Given a binary tree, return the inorder traversal of its nodes' values.

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
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> inTra;
        inOrder(root, inTra);
        return inTra;
    }

    void inOrder(TreeNode *T, vector<int> &inTra){
        if(T){
            inOrder(T->left, inTra);
            inTra.push_back(T->val);
            inOrder(T->right, inTra);
        }
    }
};

// Iterative Solution

