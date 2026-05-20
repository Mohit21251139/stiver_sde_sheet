# Write your MySQL query statement below
SELECT e.name as Employee FROM Employee e JOIN Employee ep  on e.managerId = ep.id where e.salary > ep.salary;