-- Last updated: 12/2/2025, 5:50:21 PM
# Write your MySQL query statement below
select activity_date as 'day',count(distinct user_id) as active_users
from activity group by activity_date having activity_date>date_sub('2019-07-27',interval 30 day) and activity_date<='2019-07-27' order by 'day';