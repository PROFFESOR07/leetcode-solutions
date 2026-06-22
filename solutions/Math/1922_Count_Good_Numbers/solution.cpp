/*
 * Problem ID: 1922
 * Title: Count Good Numbers
 * Difficulty: Medium
 * Topics: Math, Recursion
 * LeetCode URL: https://leetcode.com/problems/count-good-numbers/
 * Language: C++
 * Submission Date: 2026-06-22T18:07:17.302Z
 */

class Solution {
public:

    static const int MOD = 1000000007;

    long long power(long long x, long long n) {

        if(n == 0)
            return 1;

        long long half = power(x, n / 2);

        long long ans = (half * half) % MOD;

        if(n % 2)
            ans = (ans * x) % MOD;

        return ans;
    }

    int countGoodNumbers(long long n) {

        long long even = (n + 1) / 2;
        long long odd = n / 2;

        long long ans =
            (power(5, even) * power(4, odd)) % MOD;

        return ans;
    }
};