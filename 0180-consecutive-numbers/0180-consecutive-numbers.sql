# Write your MySQL query statement below
# Write your MySQL query statement below
SELECT DISTINCT num as ConsecutiveNums FROM (Select num, lag(num,1) over (order by id) as prev1, lag(num,2) over (order by id) as prev2 FROM Logs) t  where num = prev1 AND num = prev2