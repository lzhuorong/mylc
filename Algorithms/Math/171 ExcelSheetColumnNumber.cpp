// Source : https://leetcode.com/problems/excel-sheet-column-number/
// Author : lzr
// Date   : 2015-05-09

/**
Related to question Excel Sheet Column Title
Given a column title as appear in an Excel sheet, return its corresponding column number.

For example:
    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28
 */

// 26进制转10进制
class Solution {
public:
    int titleToNumber(string s) {
        int number = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            int temp = s[i] - 'A' + 1;
            number += temp * pow(26, n-1-i);
        }
        return number;
    }
};
