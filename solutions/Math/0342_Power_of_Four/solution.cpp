/*
 * Problem ID: 342
 * Title: Power of Four
 * Difficulty: Easy
 * Topics: Math, Bit Manipulation, Recursion
 * LeetCode URL: https://leetcode.com/problems/power-of-four/
 * Language: C++
 * Submission Date: 2026-06-27T05:36:27.524Z
 */

class Solution {
public:
    bool isPowerOfFour(int n) {
        return (n>0)&&((n&(n-1))==0)&&(n-1)%3==0;
    }
};