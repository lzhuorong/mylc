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
            postOrder(T->left, postTra);   // 先遍历左子树
            postOrder(T->right, postTra);  // 再遍历右子树
            postTra.push_back(T->val);   // 在postTra数组的最后添加根结点数据
        }
    }
};

// Iterative Solution
