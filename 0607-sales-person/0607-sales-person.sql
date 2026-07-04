# Write your MySQL query statement below
WITH ct1 as (
    SELECT c.com_id, o.sales_id FROM Company c  JOIN Orders o on c.com_id = o.com_id where c.name = 'RED'
)
SELECT name from SalesPerson where sales_id NOT IN (Select sales_id FROM ct1);