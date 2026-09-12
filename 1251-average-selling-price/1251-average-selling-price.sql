SELECT i.product_id,
       ROUND(COALESCE(SUM(i.price * t.units) / SUM(t.units), 0), 2) AS average_price
FROM Prices i
LEFT JOIN UnitsSold t
ON i.product_id = t.product_id
AND t.purchase_date BETWEEN i.start_date AND i.end_date
GROUP BY i.product_id;