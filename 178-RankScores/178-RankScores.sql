-- Last updated: 12/2/2025, 5:52:13 PM
# Write your MySQL query statement below
select score, dense_rank() over (order by score desc) as 'rank' from scores;