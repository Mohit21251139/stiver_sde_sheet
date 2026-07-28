# Write your MySQL query statement below
Select case 
when  id % 2 = 0 then id -1 
when id = (select max(id) from seat) then id
else id + 1
END as id, student from seat order by id;