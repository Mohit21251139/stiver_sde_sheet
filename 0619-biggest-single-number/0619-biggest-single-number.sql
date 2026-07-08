# Write your MySQL query statement below
SELECT (SELECT num FROM MyNumbers group by num having count(num) = 1 order by num DESC limit 1) as num