# Write your MySQL query statement below
WITH ct1 as (
    SELECT player_id, min(event_date) as fractions FROM Activity group by player_id
)
select ROUND(COUNT(DISTINCT c.player_id)/ (SELECT COUNT(Distinct player_id) from activity ),2 )as fraction from ct1 c JOIN Activity a on c.player_id = a.player_id and DATEDIFF(a.event_date, c.fractions) = 1 ;