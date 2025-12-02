-- Last updated: 12/2/2025, 5:52:08 PM
# Write your MySQL query statement below
select d.name as Department, temp.name as Employee,temp.salary as Salary from 
(select departmentId,id,name,salary,dense_rank() over (partition by departmentId order by salary desc) as 'rank' from employee) as temp
join
department as d
on temp.departmentId=d.id
where temp.rank=1
order by temp.id;

