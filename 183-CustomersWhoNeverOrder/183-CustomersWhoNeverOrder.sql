-- Last updated: 12/2/2025, 5:52:10 PM
# Write your MySQL query statement below
select name as Customers from customers
where id not in (select customerId from orders);