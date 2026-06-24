# Write your MySQL query statement below
SELECT sell_date, Count(distinct product) as num_sold, GROUP_CONCAT(distinct product separator ',') as products  FROM Activities group by sell_date;