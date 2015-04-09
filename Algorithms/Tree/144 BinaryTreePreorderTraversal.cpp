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
            preTra.push_back(T->val);   // ��preTra����������Ӹ��������
            preOder(T->left, preTra);   // �ȱ���������
            preOder(T->right, preTra);  // �ٱ���������
        }
    }
};

// Iterative Solution
 class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> preTra;
        stack<TreeNode*> s;
        if(root) s.push(root);                  // �������ջ

        while(!s.empty()) {
            TreeNode *t = s.top();
            s.pop();
            while(t) {
                if(t->right) s.push(t->right);  // �������������������ջ
                preTra.push_back(t->val);       // ��preTra����������������������
                t = t->left;                    // ����������
            }
        }
        return preTra;
    }
};
