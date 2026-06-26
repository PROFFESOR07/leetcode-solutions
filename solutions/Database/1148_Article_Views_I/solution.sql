/*
 * Problem ID: 1148
 * Title: Article Views I
 * Difficulty: Easy
 * Topics: Database
 * LeetCode URL: https://leetcode.com/problems/article-views-i/
 * Language: MySQL
 * Submission Date: 2026-06-26T10:46:08.000Z
 */

# Write your MySQL query statement below
SELECT DISTINCT author_id AS id
FROM Views
WHERE author_id=viewer_id
ORDER BY id ASC;

