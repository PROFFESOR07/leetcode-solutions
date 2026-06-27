/*
 * Problem ID: 509
 * Title: Fibonacci Number
 * Difficulty: Easy
 * Topics: Math, Dynamic Programming, Recursion, Memoization
 * LeetCode URL: https://leetcode.com/problems/fibonacci-number/
 * Language: C++
 * Submission Date: 2026-06-27T10:25:58.749Z
 */

class Solution {
public:
    int fib(int n) {
        
        if(n == 0)
            return 0;
        
        if(n == 1)
            return 1;
        
        return fib(n - 1) + fib(n - 2);
    }
};