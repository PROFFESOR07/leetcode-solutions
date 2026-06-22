/*
 * Problem ID: 9
 * Title: Palindrome Number
 * Difficulty: Easy
 * Topics: Math
 * LeetCode URL: https://leetcode.com/problems/palindrome-number/
 * Language: C++
 * Submission Date: 2026-06-22T09:19:29.241Z
 */

class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int revHalf = 0;

        while(x > revHalf) {
            revHalf = revHalf * 10 + x % 10;
            x /= 10;
        }

        return (x == revHalf) || (x == revHalf / 10);
    }
};