SELECT t.student_id , t.student_name , j.subject_name , count(s.student_id) AS attended_exams
FROM Students t
CROSS JOIN Subjects j
LEFT JOIN Examinations s
ON t.student_id = s.student_id
AND j.subject_name = s.subject_name
GROUP BY t.student_id , j.subject_name , t.student_name
ORDER BY t.student_id , t.student_name , j.subject_name






