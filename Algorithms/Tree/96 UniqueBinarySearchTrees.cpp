// Source : https://leetcode.com/problems/unique-binary-search-trees/
// Author : lzr
// Date   : 2015-04-11

/**
Given n, how many structurally unique BST's (binary search trees) that store values 1...n?
For example,
Given n = 3, there are a total of 5 unique BST's.
**/

class Solution {
public:
    int numTrees(int n) {
        if (n <= 1)
            return n;
    int *f = new int[n + 1];

        int bst = 0;
        for (int i = 1; i <= n; i++) {
            if (i == 1 || i == n)
                bst += numTrees(n - 1);
            else
                bst += numTrees(i - 1) * numTrees(n - i);
        }
        return bst;
    }
};
