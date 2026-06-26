/*
 * Problem ID: 1757
 * Title: Recyclable and Low Fat Products
 * Difficulty: Easy
 * Topics: Database
 * LeetCode URL: https://leetcode.com/problems/recyclable-and-low-fat-products/
 * Language: MySQL
 * Submission Date: 2026-06-26T10:28:27.778Z
 */

# Write your MySQL query statement below
SELECT product_id
FROM Products
WHERE low_fats = 'Y'
AND recyclable = 'Y';