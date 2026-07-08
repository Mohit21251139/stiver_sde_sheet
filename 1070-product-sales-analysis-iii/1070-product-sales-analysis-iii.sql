# Write your MySQL query statement below
with ct1 as (
    SELECT product_id, RANK() over (partition by product_id order by year) as "rnk", year ,quantity, price FROM Sales 
)
select product_id, year as first_year, quantity, price from ct1 where rnk = 1 