# Write your MySQL query statement below
DELETE p FROM Person p JOIN Person p2 on p.Email = p2.Email where p.id > p2.id;