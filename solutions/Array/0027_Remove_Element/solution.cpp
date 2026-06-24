/*
 * Problem ID: 27
 * Title: Remove Element
 * Difficulty: Easy
 * Topics: Array, Two Pointers
 * LeetCode URL: https://leetcode.com/problems/remove-element/
 * Language: C++
 * Submission Date: 2026-06-24T09:52:00.397Z
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]!=val){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};