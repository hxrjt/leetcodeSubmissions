-- Last updated: 12/2/2025, 5:49:21 PM
# Write your MySQL query statement below
select employee_id, 
case
when name not like "M%" and employee_id%2!=0 then salary
else 0
end as bonus
from employees order by employee_id;