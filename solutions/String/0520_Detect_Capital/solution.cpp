/*
 * Problem ID: 520
 * Title: Detect Capital
 * Difficulty: Easy
 * Topics: String
 * LeetCode URL: https://leetcode.com/problems/detect-capital/
 * Language: C++
 * Submission Date: 2026-06-30T16:27:21.067Z
 */

class Solution {
public:
    bool detectCapitalUse(string word) {
        int capitals = 0;
        
        // Step 1: Count total capitals in the string
        for (char c : word) {
            if (isupper(static_cast<unsigned char>(c))) {
                capitals++;
            }
        }
        
        // Case 1: All letters are capitals (e.g., "USA")
        if (capitals == word.length()) return true;
        
        // Case 2: No letters are capitals (e.g., "leetcode")
        if (capitals == 0) return true;
        
        // Case 3: Only the first letter is capital (e.g., "Google")
        if (capitals == 1 && isupper(static_cast<unsigned char>(word[0]))) return true;
        
        return false;
    }
};