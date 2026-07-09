# Write your MySQL query statement below
With ct1 as(
    SELECT u.name as results FROM MovieRating m JOIN Users u on m.user_id = u.user_id group by u.user_id , u.name order by COUNT(*) DESC , u.name ASC limit 1
),
ct2 as(
    SELECT m.title as results FROM MovieRating mr JOIN Movies m on mr.movie_id = m.movie_id WHERE mr.created_at BETWEEN '2020-02-01'
                            AND '2020-02-29' group by m.movie_id , m.title order by AVG(mr.rating) Desc, m.title ASC limit 1
)
select * from ct1
UNION ALL
Select * from ct2
