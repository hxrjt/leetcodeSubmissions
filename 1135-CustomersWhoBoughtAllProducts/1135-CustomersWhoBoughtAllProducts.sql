-- Last updated: 12/2/2025, 5:50:31 PM
# Write your MySQL query statement below
select customer_id from customer group by customer_id having count(distinct product_key)=(select count(distinct product_key) from product);