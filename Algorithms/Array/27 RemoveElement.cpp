// Source : https://leetcode.com/problems/remove-element/
// Author : lzr
// Date   : 2015-04-24

/**
Given an array and a value, remove all instances of that value in place and return the new length.
The order of elements can be changed. It doesn't matter what you leave beyond the new length.
 */

class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        for (int i = 0; i < n; i++) {
            if (A[i] == elem) {
                A[i] = A[n-1];  // 用最后一个元素取代当前元素
                n--;            // 数组长度减1
                i--;            // i退回去1位，在下一次循环时可以再次判断新的A[i]与elem是否相等
            }
        }
        return n;
};
