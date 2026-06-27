/*
 * Problem ID: 344
 * Title: Reverse String
 * Difficulty: Easy
 * Topics: Two Pointers, String
 * LeetCode URL: https://leetcode.com/problems/reverse-string/
 * Language: C++
 * Submission Date: 2026-06-27T17:50:43.630Z
 */

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size()-1;
        while(left<right){
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};