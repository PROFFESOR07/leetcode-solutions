# Problem ID: 192
# Title: Word Frequency
# Difficulty: Medium
# Topics: Shell
# LeetCode URL: https://leetcode.com/problems/word-frequency/
# Language: Bash
# Submission Date: 2026-06-26T11:08:14.208Z

cat words.txt | tr -s ' ' '\n' | sort | uniq -c | sort -rn | awk '{print $2, $1}'