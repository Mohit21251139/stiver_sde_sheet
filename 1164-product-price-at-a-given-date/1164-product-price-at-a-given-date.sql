# Write your MySQL query statement below
WITH ct1 as (
    select product_id, RANK() over( partition by product_id order by change_date DESC) as rnk, new_price FROM Products where change_date <= '2019-08-16'
)
SELECT product_id, new_price as price FROM ct1 where rnk = 1 
union 
SELECT product_id,
       10 AS price
FROM Products
WHERE product_id NOT In (
    SELECT product_id
    FROM Products
    WHERE change_date <= '2019-08-16'
);