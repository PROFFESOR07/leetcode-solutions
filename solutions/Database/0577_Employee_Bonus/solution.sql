/*
 * Problem ID: 577
 * Title: Employee Bonus
 * Difficulty: Easy
 * Topics: Database
 * LeetCode URL: https://leetcode.com/problems/employee-bonus/
 * Language: MySQL
 * Submission Date: 2026-06-30T10:38:01.790Z
 */

# Write your MySQL query statement below
SELECT name, bonus
FROM Employee e
LEFT JOIN Bonus b
ON e.empId = b.empId
WHERE bonus < 1000
    OR bonus IS NULL;