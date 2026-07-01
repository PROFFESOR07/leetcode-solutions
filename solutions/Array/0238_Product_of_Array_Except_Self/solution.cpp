/*
 * Problem ID: 238
 * Title: Product of Array Except Self
 * Difficulty: Medium
 * Topics: Array, Prefix Sum
 * LeetCode URL: https://leetcode.com/problems/product-of-array-except-self/
 * Language: C++
 * Submission Date: 2026-07-01T08:56:14.930Z
 */

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        int prod = 1;
        
        for(int i = 0; i<nums.size();i++){
            ans[i] = prod;
            prod *= nums[i];
        }
        prod = 1;
        for(int i = int(nums.size()) - 1;i>=0; i--){
            ans[i] *= prod;
            prod *= nums[i];
        }
        return ans;
    }
};