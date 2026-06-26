# Problem ID: 194
# Title: Transpose File
# Difficulty: Medium
# Topics: Shell
# LeetCode URL: https://leetcode.com/problems/transpose-file/
# Language: Bash
# Submission Date: 2026-06-26T11:05:07.395Z

# Read from the file file.txt and print its transposed content to stdout.
awk '
{
    for (i = 1; i <= NF; i++) {
        if (NR == 1)
            res[i] = $i
        else
            res[i] = res[i] " " $i
    }
}
END {
    for (i = 1; i <= NF; i++)
        print res[i]
}' file.txt