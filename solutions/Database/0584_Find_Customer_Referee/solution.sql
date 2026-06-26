/*
 * Problem ID: 584
 * Title: Find Customer Referee
 * Difficulty: Easy
 * Topics: Database
 * LeetCode URL: https://leetcode.com/problems/find-customer-referee/
 * Language: MySQL
 * Submission Date: 2026-06-26T10:38:06.638Z
 */

# Write your MySQL query statement below
SELECT name
FROM Customer
WHERE referee_id!=2
OR referee_id IS NULL;