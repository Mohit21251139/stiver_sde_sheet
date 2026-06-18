# Write your MySQL query statement below
SELECT u.name , SUM(t.amount) as balance FROM Users u JOIN Transactions t on u.account = t.account group by t.account having sum(t.amount) > 10000