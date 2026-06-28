/*
 * Problem ID: 3945
 * Title: Digit Frequency Score
 * Difficulty: Easy
 * Topics: Hash Table, Math
 * LeetCode URL: https://leetcode.com/problems/digit-frequency-score/
 * Language: C++
 * Submission Date: 2026-06-28T12:21:37.453Z
 */

class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum = 0;
        while(n){
            sum+=(n%10);
            n/=10;
        }
        return sum;
    }
};