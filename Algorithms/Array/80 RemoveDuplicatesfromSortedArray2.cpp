// Source : https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
// Author : lzr
// Date   : 2015-04-09

/**
Follow up for "Remove Duplicates":
What if duplicates are allowed at most twice?
For example,
Given sorted array A = [1,1,1,2,2,3],
Your function should return length = 5, and A is now [1,1,2,2,3].
 */

class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if (n<=2) return n;
        int i = 2;
        for (int j = 2; j < n; j++) {
            if (A[j] != A[i - 2])
                A[i++] = A [j];
        }
        return i;
    }
};
