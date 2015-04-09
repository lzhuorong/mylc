// Source : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Author : lzr
// Date   : 2015-04-09

/**
Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
Do not allocate extra space for another array, you must do this in place with constant memory.
For example,
Given input array A = [1,1,2],
Your function should return length = 2, and A is now [1,2].
 */

class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if (!n) return 0;
        int i = 0;
        for (int j = 1; j < n; j++) {
            if (A[j] != A[i])
                A[++i] = A [j];
        }
        return i+1;
    }
};
