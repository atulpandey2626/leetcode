SELECT s.project_id , ROUND(AVG(y.experience_years),2) AS average_years
FROM Project s
JOIN Employee y
ON s.employee_id = y.employee_id
GROUP BY s.project_id
