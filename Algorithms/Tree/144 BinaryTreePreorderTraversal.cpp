// Source : https://leetcode.com/problems/binary-tree-preorder-traversal/
// Author : lzr
// Date   : 2015-04-07

/**
Given a binary tree, return the preorder traversal of its nodes' values.

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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> preTra;
        preOder(root, preTra);
        return preTra;
    }

    void preOder(TreeNode *T, vector<int> &preTra){
        if(T){
            preTra.push_back(T->val);   // 在preTra数组的最后添加根结点数据
            preOder(T->left, preTra);   // 先遍历左子树
            preOder(T->right, preTra);  // 再遍历右子树
        }
    }
};

// Iterative Solution
 class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> preTra;
        stack<TreeNode*> s;
        if(root) s.push(root);                  // 根结点入栈

        while(!s.empty()) {
            TreeNode *t = s.top();
            s.pop();
            while(t) {
                if(t->right) s.push(t->right);  // 若结点有右子树，先入栈
                preTra.push_back(t->val);       // 在preTra数组中添加子树根结点数据
                t = t->left;                    // 遍历左子树
            }
        }
        return preTra;
    }
};
