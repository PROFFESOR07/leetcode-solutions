/*
 * Problem ID: 231
 * Title: Power of Two
 * Difficulty: Easy
 * Topics: Math, Bit Manipulation, Recursion
 * LeetCode URL: https://leetcode.com/problems/power-of-two/
 * Language: C++
 * Submission Date: 2026-06-27T05:34:12.879Z
 */

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n>0)&&(n & (n - 1)) == 0;
    }
};