-- Last updated: 12/2/2025, 5:50:25 PM
# Write your MySQL query statement below
select player_id,min(event_date) as first_login from activity group by player_id;