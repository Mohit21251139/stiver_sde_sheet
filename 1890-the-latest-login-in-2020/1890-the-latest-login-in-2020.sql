-- SELECT user_id , max(time_stamp) as last_stamp FROM Logins where YEAR(time_stamp) = 2020 group by user_id
-- Using the row_number() window function

SELECT user_id , time_stamp as last_stamp FROM (SELECT user_id, time_stamp, Row_Number() over (partition by user_id order by time_stamp DESC) as rnk FROM Logins  WHERE time_stamp >= '2020-01-01'
      AND time_stamp < '2021-01-01' ) as t where rnk = 1;