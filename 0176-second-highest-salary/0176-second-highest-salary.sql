# Write your MySQL query statement below
-- SELECT max(salary) as SecondHighestSalary from Employee where salary < ( Select max(salary) from Employee )
Select (SELECT distinct salary FROM Employee order by salary DESC LIMIT 1 OFFSET 1) as SecondHighestSalary;