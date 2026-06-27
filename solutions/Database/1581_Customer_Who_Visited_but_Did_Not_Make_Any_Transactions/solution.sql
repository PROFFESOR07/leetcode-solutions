/*
 * Problem ID: 1581
 * Title: Customer Who Visited but Did Not Make Any Transactions
 * Difficulty: Easy
 * Topics: Database
 * LeetCode URL: https://leetcode.com/problems/customer-who-visited-but-did-not-make-any-transactions/
 * Language: MySQL
 * Submission Date: 2026-06-27T11:22:13.057Z
 */

# Write your MySQL query statement below
SELECT customer_id,
    COUNT(*) AS count_no_trans
FROM Visits
LEFT JOIN Transactions
ON Visits.visit_id = Transactions.visit_id
WHERE transaction_id IS NULL
GROUP BY customer_id;

