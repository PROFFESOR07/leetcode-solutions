/*
 * Problem ID: 151
 * Title: Reverse Words in a String
 * Difficulty: Medium
 * Topics: Two Pointers, String
 * LeetCode URL: https://leetcode.com/problems/reverse-words-in-a-string/
 * Language: C++
 * Submission Date: 2026-06-30T15:57:42.576Z
 */

class Solution {
public:
    string reverseWords(string s) {
        int i = 0, j = 0;
        int n = s.size();

        while (j < n) {
            while (j < n && s[j] == ' ')
                j++;

            while (j < n && s[j] != ' ')
                s[i++] = s[j++];

            while (j < n && s[j] == ' ')
                j++;

            if (j < n)
                s[i++] = ' ';
        }

        s.resize(i);

        reverse(s.begin(), s.end());

        int start = 0;

        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                reverse(s.begin() + start, s.begin() + i);
                start = i + 1;
            }
        }

        return s;
    }
};