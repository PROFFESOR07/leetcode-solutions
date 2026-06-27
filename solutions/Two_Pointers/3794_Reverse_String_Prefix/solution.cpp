/*
 * Problem ID: 3794
 * Title: Reverse String Prefix
 * Difficulty: Easy
 * Topics: Two Pointers, String
 * LeetCode URL: https://leetcode.com/problems/reverse-string-prefix/
 * Language: C++
 * Submission Date: 2026-06-27T17:56:49.387Z
 */

class Solution {
public:
    string reversePrefix(string s, int k) {
        reverse(s.begin(),s.begin()+k);
        return s;
    }
};