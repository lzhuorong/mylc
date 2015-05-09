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
                A[i] = A[n-1];  // �����һ��Ԫ��ȡ����ǰԪ��
                n--;            // ���鳤�ȼ�1
                i--;            // i�˻�ȥ1λ������һ��ѭ��ʱ�����ٴ��ж��µ�A[i]��elem�Ƿ����
            }
        }
        return n;
};
