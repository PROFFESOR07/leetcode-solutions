/*
 * Problem ID: 39
 * Title: Combination Sum
 * Difficulty: Medium
 * Topics: Array, Backtracking
 * LeetCode URL: https://leetcode.com/problems/combination-sum/
 * Language: C++
 * Submission Date: 2026-06-25T10:11:38.458Z
 */


class Solution {
public:
    void solve(int i, int target, vector<int>& candidates,
               vector<int>& curr, vector<vector<int>>& ans) {

        // If we've considered all candidates
        if (i == candidates.size()) {
            if (target == 0)
                ans.push_back(curr);
            return; 
        }

        // Choice 1: Take the current candidate (if possible)
        if (candidates[i] <= target) {
            curr.push_back(candidates[i]);

            // Stay at the same index because we can reuse this number
            solve(i, target - candidates[i], candidates, curr, ans);

            // Backtrack
            curr.pop_back();
        }

        // Choice 2: Skip the current candidate
        solve(i + 1, target, candidates, curr, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;

        solve(0, target, candidates, curr, ans);

        return ans;
    }
};