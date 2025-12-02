-- Last updated: 12/2/2025, 5:49:15 PM
# Write your MySQL query statement below
with temp as(
    select s.user_id,c.action from signups as s
    left join
    confirmations as c
    on s.user_id=c.user_id
)
select user_id,round(avg(case
    when action='confirmed' then 1
    else 0
    end
),2) as confirmation_rate from temp group by user_id;