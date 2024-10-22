# Write your MySQL query statement below
SELECT ROUND(AVG(order_date =customer_pref_delivery_date ) * 100 ,2) as immediate_percentage 
FROM Delivery WHERE (customer_id,order_date) in (SELECT  customer_id, min(order_date) FROM Delivery Group BY customer_id);