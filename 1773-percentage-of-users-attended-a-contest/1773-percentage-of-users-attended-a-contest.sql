# Write your MySQL query statement below
SELECT r.contest_id,ROUND (COUNT(DISTINCT r.user_id) * 100 / (SELECT COUNT(DISTINCT r.user_id) FROM Users r ),2)  as percentage   FROM Register r  
GROUP BY r.contest_id
ORDER BY percentage DESC ,contest_id;
