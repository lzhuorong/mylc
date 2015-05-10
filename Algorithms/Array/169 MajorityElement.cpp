// Source : https://leetcode.com/problems/majority-element/
// Author : lzr
// Date   : 2015-05-10

/**
Given an array of size n, find the majority element. The majority element is the element that appears more than  n/2  times.
You may assume that the array is non-empty and the majority element always exist in the array.
 */

// Majority element: 出现次数超过一半，即出现次数比其它所有数字加起来都多
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int flag = nums[0];         // 存数组中的数字
        int cnt = 1;                // 存出现次数
        for (int i = 1; i < n; i++) {
            if (flag == nums[i])    // 与保存的数字相同
                cnt++;              // 次数+1
            else                    // 与保存的数字不同
                cnt--;              // 次数-1
            if (cnt == 0) {         // 次数减为0时
                flag = nums[i];     // 更换保存的数字为当前数字
                cnt = 1;            // 出现次数重值为1
            }
        }
        return flag;
    }
};
