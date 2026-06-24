# Write your MySQL query statement below
With temp as (SELECT * , Row_Number() over (partition by customer_id order by order_date) as "rnk" FROM Delivery)
SELECT ROUND(AVG (
    CASE WHEN order_date = customer_pref_delivery_date Then 1 else 0
    END ) * 100 ,2 ) as immediate_percentage FROM temp where rnk = 1;