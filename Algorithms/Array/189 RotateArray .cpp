// Source : https://leetcode.com/problems/rotate-array/
// Author : lzr
// Date   : 2015-04-24/2015-05-07

/**
Rotate an array of n elements to the right by k steps.
For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].
Note: Try to come up as many solutions as you can, there are at least 3 different ways to solve this problem.
 */

// Solution1 -> Time Limit Exceeded
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        size_t n = nums.size();
        while (k--) {
            int temp = nums[n-1];
            for (int i=1; i<n; i++) {
                nums[i] = nums[i-1];
            }
            nums[0] = temp;
        }
    }
};

// Solution2 - 数组分为两部分，先反转1~n-k-1，再反转n-k~n，最后反转整个数组
// reverse函数两个参数区间为左开右闭
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        size_t n = nums.size();
        k = k % n;
        if (k > 0) {
            reverse(nums.begin(), nums.begin() + (n - k));
            reverse(nums.begin() + (n - k), nums.begin() + n);
            reverse(nums.begin(), nums.begin() + n);
        }

    }
};







class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        size_t n = nums.size();
        k = k % n;
        for(int p1=n-1,p2=p1-k; p2>0; p1--,p2--)
            swap(nums[p1], nums[p2]);
        while(p2 >= 0) {
            int i = k;
            while(i--)
                swap(nums[p2], nums[p2+i]);
            p2--;
        }
    }
};
