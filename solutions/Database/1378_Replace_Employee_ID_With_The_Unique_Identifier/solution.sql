/*
 * Problem ID: 1378
 * Title: Replace Employee ID With The Unique Identifier
 * Difficulty: Easy
 * Topics: Database
 * LeetCode URL: https://leetcode.com/problems/replace-employee-id-with-the-unique-identifier/
 * Language: MySQL
 * Submission Date: 2026-06-26T11:23:00.281Z
 */

# Write your MySQL query statement below
SELECT unique_id, name
FROM Employees
LEFT JOIN EmployeeUNI
ON Employees.id = EmployeeUNI.id