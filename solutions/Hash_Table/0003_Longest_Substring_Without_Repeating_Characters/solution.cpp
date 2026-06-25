/*
 * Problem ID: 3
 * Title: Longest Substring Without Repeating Characters
 * Difficulty: Medium
 * Topics: Hash Table, String, Sliding Window
 * LeetCode URL: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 * Language: C++
 * Submission Date: 2026-06-25T10:46:06.400Z
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string curr = "";
        string max = "";

        for (int i = 0; i < s.length(); i++) {

            if (curr.find(s[i]) == string::npos) {
                curr += s[i];
            } else {
                if (curr.size() > max.size()) {
                    max = curr;
                }

                int pos = curr.find(s[i]);

                // Remove everything up to and including the duplicate
                curr = curr.substr(pos + 1);

                // Add the current character
                curr += s[i];
            }
        }

        // In case the longest substring is at the end
        if (curr.size() > max.size()) {
            max = curr;
        }

        return max.size();
    }
};