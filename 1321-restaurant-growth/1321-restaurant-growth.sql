# Write your MySQL query statement below
WITH ct1 as (
    SELECT visited_on,SUM(amount) as total_amount FROM Customer group by visited_on
),
ct2 as (
    SELECT c1.visited_on, SUM(c2.total_amount) as amount FROM ct1 c1 JOIN ct1 c2 on DATEDIFF(c1.visited_on,c2.visited_on) BETWEEN 0 and 6 group by c1.visited_on
)

SELECT
    visited_on,
    amount,
    ROUND(amount/7,2) AS average_amount
FROM ct2
WHERE visited_on >=
(
    SELECT DATE_ADD(MIN(visited_on),INTERVAL 6 DAY)
    FROM ct1
)
ORDER BY visited_on;