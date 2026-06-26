# Problem ID: 193
# Title: Valid Phone Numbers
# Difficulty: Easy
# Topics: Shell
# LeetCode URL: https://leetcode.com/problems/valid-phone-numbers/
# Language: Bash
# Submission Date: 2026-06-26T11:00:26.142Z

# Read from the file file.txt and output all valid phone numbers to stdout.
grep -E '^([0-9]{3}-[0-9]{3}-[0-9]{4}|\([0-9]{3}\) [0-9]{3}-[0-9]{4})$' file.txt