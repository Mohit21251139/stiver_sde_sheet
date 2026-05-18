# Write your MySQL query statement below
SELECT score , dense_rank() over (order by score DESC) as 'rank' FROM Scores;