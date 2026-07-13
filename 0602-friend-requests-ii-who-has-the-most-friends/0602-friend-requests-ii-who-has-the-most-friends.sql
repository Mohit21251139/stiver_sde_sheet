# Write your MySQL query statement below
With ct1 as (
    select requester_id as id FROM RequestAccepted 
    UNION ALL 
    select accepter_id FROM RequestAccepted
)
select id, count(*) as num from ct1 group by id order by num DESC limit 1