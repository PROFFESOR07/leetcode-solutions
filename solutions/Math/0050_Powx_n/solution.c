/*
 * Problem ID: 50
 * Title: Pow(x, n)
 * Difficulty: Medium
 * Topics: Math, Recursion
 * LeetCode URL: https://leetcode.com/problems/powx-n/
 * Language: C
 * Submission Date: 2026-06-22T17:57:46.707Z
 */

double myPow(double x, int n) {
    if (n == 0) return 1;

    long long N = n;

    if (N < 0) {
        x = 1 / x;
        N = -N;
    }

    double half = myPow(x, N / 2);

    if (N % 2 == 0)
        return half * half;
    else
        return half * half * x;
}