# Write your MySQL query statement below
SELECT distinct stock_name, SUM(CASE when operation = 'Sell' THEN price else -price END) over (partition by stock_name) as capital_gain_loss FROM Stocks