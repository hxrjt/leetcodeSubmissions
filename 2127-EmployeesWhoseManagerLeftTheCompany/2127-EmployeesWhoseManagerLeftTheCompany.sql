-- Last updated: 12/2/2025, 5:49:16 PM
# Write your MySQL query statement below
select employee_id from employees where manager_id not in (select distinct employee_id from employees) and salary<30000 order by employee_id;