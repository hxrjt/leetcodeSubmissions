-- Last updated: 12/2/2025, 5:50:16 PM
# Write your MySQL query statement below

select 
round(count(*)/(select count(distinct customer_id) from delivery)*100,2)
as immediate_percentage
from delivery
where (customer_id,customer_pref_delivery_date) in 
(select customer_id,min(order_date) from delivery as first_order group by customer_id);