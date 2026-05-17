# Write your MySQL query statement below
SELECT c.name as Customers FROM Customers c LEFT JOIN Orders o on c.id = o.customerId where o.id is NULL;