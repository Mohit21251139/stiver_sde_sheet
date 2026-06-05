# Write your MySQL query statement below
SELECT e.employee_id FROM employees e LEFT JOIN Salaries s on e.employee_id = s.employee_id where s.salary is NULL UNION 
SELECT s.employee_id FROM salaries s LEFT JOIN employees e on s.employee_id = e.employee_id where e.name is NULL
ORDER BY employee_id 