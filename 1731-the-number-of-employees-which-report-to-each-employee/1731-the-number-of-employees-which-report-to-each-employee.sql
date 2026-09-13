SELECT p.employee_id,
       p.name,
       COUNT(*) AS reports_count,
       ROUND(AVG(o.age), 0) AS average_age
FROM Employees p
JOIN Employees o
ON p.employee_id = o.reports_to
GROUP BY p.employee_id, p.name
ORDER BY p.employee_id