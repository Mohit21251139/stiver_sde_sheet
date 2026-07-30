# Write your MySQL query statement below
With ct1 as (
    Select d.name as Department , e.name as Employee ,e.salary as Salary, dense_rank() over (partition by d.name order by e.salary DESC) as rnk  FROM Employee e join Department d on e.departmentId = d.id 
)
Select Department, Employee, Salary FROM ct1 where rnk <= '3'