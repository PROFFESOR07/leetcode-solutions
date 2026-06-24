/*
 * Problem ID: 292
 * Title: Nim Game
 * Difficulty: Easy
 * Topics: Math, Brainteaser, Game Theory
 * LeetCode URL: https://leetcode.com/problems/nim-game/
 * Language: C++
 * Submission Date: 2026-06-24T09:42:46.496Z
 */

class Solution {
public:
    bool canWinNim(int n) {
        return n % 4 != 0;
    }
};