/*
 * Problem ID: 326
 * Title: Power of Three
 * Difficulty: Easy
 * Topics: Math, Recursion
 * LeetCode URL: https://leetcode.com/problems/power-of-three/
 * Language: C++
 * Submission Date: 2026-06-27T05:46:25.421Z
 */

#include <cmath>
class Solution {
public:
    bool isPowerOfThree(int n) {
        return(n>0)&&((long long)std::pow(3.0,19.0)%n)==0;
    }
};