SELECT s.user_id ,ROUND(COALESCE(AVG(t.action = 'confirmed'),0),2) AS confirmation_rate
FROM Signups s
LEFT JOIN Confirmations t
ON s.user_id = t.user_id
GROUP BY s.user_id

