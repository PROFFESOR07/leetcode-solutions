/*
 * Problem ID: 1280
 * Title: Students and Examinations
 * Difficulty: Easy
 * Topics: Database
 * LeetCode URL: https://leetcode.com/problems/students-and-examinations/
 * Language: MySQL
 * Submission Date: 2026-07-01T07:29:25.999Z
 */

# Write your MySQL query statement below
SELECT
    s.student_id,
    s.student_name,
    sub.subject_name,
    COUNT(e.student_id) AS attended_exams
FROM Students s
CROSS JOIN Subjects sub
LEFT JOIN Examinations e
ON s.student_id = e.student_id
AND sub.subject_name = e.subject_name
GROUP BY
    s.student_id,
    s.student_name,
    sub.subject_name
ORDER BY
    s.student_id,
    sub.subject_name;