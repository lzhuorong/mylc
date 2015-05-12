// Source : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
// Author : lzr
// Date   : 2015-05-11

/**
Follow up for "Find Minimum in Rotated Sorted Array":
What if duplicates are allowed?
Would this affect the run-time complexity? How and why?
Suppose a sorted array is rotated at some pivot unknown to you beforehand.
(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
Find the minimum element.
The array may contain duplicates.
 */

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int mid = low;
        while (nums[low] >= nums[high]) {
            if (high - low <= 1) {
                    mid = high;
                    break;
            }
            mid = low + ((high - low) >> 1);

            // 如果low、high和mid三者指向的数字相等，例如{1,1,1,0,1}
            // 无法判断mid是在前面数组中还是后面数组中。
            // 则只能顺序查找。
            if (nums[low] == nums[high] && nums[mid] == nums[low])
                return MinInOrder(nums, low, high);

            if (nums[mid] >= nums[0])
                low = mid;
            else if (nums[mid] <= nums[n-1])
                high = mid;
            }
        return nums[mid];
    }

    // 顺序查找
    int MinInOrder(vector<int>& nums, int low, int high) {
        int result = nums[low];
        for (int i = low + 1; i <= high; i++) {
            if (nums[i] < result)
                result = nums[i];
        }
        return result;
    }
};
