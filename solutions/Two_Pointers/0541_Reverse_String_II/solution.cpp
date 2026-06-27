/*
 * Problem ID: 541
 * Title: Reverse String II
 * Difficulty: Easy
 * Topics: Two Pointers, String
 * LeetCode URL: https://leetcode.com/problems/reverse-string-ii/
 * Language: C++
 * Submission Date: 2026-06-27T18:46:24.223Z
 */

class Solution {
public:
    string reverseStr(string s, int k) { 
        for(int i = 0; i<s.size();i+=2*k){
            reverse(s.begin()+i, s.begin()+(min(int(s.length()),i+k)));
        }
        return s;
    }
};