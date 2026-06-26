/*
 * Problem ID: 1683
 * Title: Invalid Tweets
 * Difficulty: Easy
 * Topics: Database
 * LeetCode URL: https://leetcode.com/problems/invalid-tweets/
 * Language: MySQL
 * Submission Date: 2026-06-26T10:48:58.330Z
 */

# Write your MySQL query statement below
SELECT tweet_id
FROM Tweets
WHERE LENGTH(content)>15;