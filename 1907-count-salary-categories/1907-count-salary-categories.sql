# Write your MySQL query statement below
SELECT "Low Salary" as category , Count(account_id) as accounts_count FROM Accounts where income < 20000 
UNION 
SELECT  "Average Salary", Count(account_id) as accounts_count FROM Accounts where income >= 20000 AND income <= 50000
Union 
Select "High Salary", Count(account_id) as accounts_count FROM Accounts where income > 50000;