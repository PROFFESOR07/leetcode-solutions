/*
 * Problem ID: 595
 * Title: Big Countries
 * Difficulty: Easy
 * Topics: Database
 * LeetCode URL: https://leetcode.com/problems/big-countries/
 * Language: MySQL
 * Submission Date: 2026-06-26T10:41:14.431Z
 */

# Write your MySQL query statement below
SELECT name, population, area
FROM World
WHERE area>=3000000
OR population>=25000000;