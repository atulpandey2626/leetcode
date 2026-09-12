SELECT e.name
FROM Employee e
JOIN Employee y
ON e.id = y.managerId
GROUP BY y.managerId
HAVING COUNT(y.managerId) >= 5
