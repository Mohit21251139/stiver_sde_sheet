# Write your MySQL query statement below
With ct1 as (
    select * FROM orders where order_date BETWEEN '2020-02-01'
                    AND '2020-02-29'
)
Select p.product_name , sum(c.unit) as unit FROM Products p JOIN ct1 c on p.product_id = c.product_id group by c.product_id having sum(c.unit) >= 100