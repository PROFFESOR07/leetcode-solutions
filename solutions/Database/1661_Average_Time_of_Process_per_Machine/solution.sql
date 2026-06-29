/*
 * Problem ID: 1661
 * Title: Average Time of Process per Machine
 * Difficulty: Easy
 * Topics: Database
 * LeetCode URL: https://leetcode.com/problems/average-time-of-process-per-machine/
 * Language: MySQL
 * Submission Date: 2026-06-29T09:52:11.963Z
 */

# Write your MySQL query statement below
SELECT
    a.machine_id,
    ROUND(AVG(b.timestamp - a.timestamp), 3) AS processing_time
FROM Activity a
JOIN Activity b
ON a.machine_id = b.machine_id
AND a.process_id = b.process_id
AND a.activity_type = 'start'
AND b.activity_type = 'end'
GROUP BY a.machine_id;