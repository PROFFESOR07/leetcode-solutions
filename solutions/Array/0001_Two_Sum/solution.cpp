/*
 * Problem ID: 1
 * Title: Two Sum
 * Difficulty: Easy
 * Topics: Array, Hash Table
 * LeetCode URL: https://leetcode.com/problems/two-sum/
 * Language: C++
 * Submission Date: 2026-06-22T08:53:35.128Z
 */

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> mp;

        for(int i = 0; i < nums.size(); i++) {

            int need = target - nums[i];

            if(mp.find(need) != mp.end()) {

                return {mp[need], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};