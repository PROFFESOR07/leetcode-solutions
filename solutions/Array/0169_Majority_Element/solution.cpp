/*
 * Problem ID: 169
 * Title: Majority Element
 * Difficulty: Easy
 * Topics: Array, Hash Table, Divide and Conquer, Sorting, Counting
 * LeetCode URL: https://leetcode.com/problems/majority-element/
 * Language: C++
 * Submission Date: 2026-06-25T08:12:51.408Z
 */

class Solution {
public:

    int majorityElement(vector<int>& nums) {

        int candidate = nums[0];
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            if (count == 0)
                candidate = nums[i];

            if (nums[i] == candidate)
                count++;
            else
                count--;
        }
        return candidate;
    }
};