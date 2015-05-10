// Source : https://leetcode.com/problems/excel-sheet-column-title/
// Author : lzr
// Date   : 2015-05-09

/**
Given a positive integer, return its corresponding column title as appear in an Excel sheet.

For example:
    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB
 */

// 10进制转26进制
class Solution {
public:
    string convertToTitle(int n) {
        string title;
        while (n) {
            char addt = 'A' + (--n) % 26;
            title = addt + title;
            n = n / 26;
        }
        return title;
    }
};
