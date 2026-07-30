# Write your MySQL query statement below
Select score, dense_rank() over (order by score DESC) as "rank" FROM Scores;