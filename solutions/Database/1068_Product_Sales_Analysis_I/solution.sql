/*
 * Problem ID: 1068
 * Title: Product Sales Analysis I
 * Difficulty: Easy
 * Topics: Database
 * LeetCode URL: https://leetcode.com/problems/product-sales-analysis-i/
 * Language: MySQL
 * Submission Date: 2026-06-26T11:26:49.845Z
 */

# Write your MySQL query statement below
SELECT product_name, year, price
FROM Sales
JOIN Product
ON Sales.product_id = Product.product_id