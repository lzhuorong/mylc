// Source : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// Author : lzr
// Date   : 2015-05-11

/**
Suppose a sorted array is rotated at some pivot unknown to you beforehand.
(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
Find the minimum element.
You may assume no duplicate exists in the array.
 */

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int mid = low;      // 若数组没有旋转，直接返回第一个元素
        while (nums[low] >= nums[high]) {
            if (high - low <= 1) {
                    mid = high;
                    break;
            }
            mid = low + ((high - low) >> 1);
            if (nums[mid] > nums[0])
                low = mid;
            else if (nums[mid] < nums[n-1])
                high = mid;
            }
        return nums[mid];
    }
};
