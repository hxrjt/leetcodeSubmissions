-- Last updated: 12/2/2025, 5:50:02 PM
# Write your MySQL query statement below
with temp as(
    select visited_on,sum(amount) as total_day_amount from customer group by visited_on
)
select visited_on, 
sum(total_day_amount) over(
    order by visited_on
    range between interval 6 day preceding and current row
) as amount,
round(avg(total_day_amount) over(
    order by visited_on
    range between interval 6 day preceding and current row
),2) as average_amount
from temp limit 9999 offset 6;