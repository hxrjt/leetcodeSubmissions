-- Last updated: 12/2/2025, 5:52:14 PM
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
set N=N-1;
  RETURN (
      # Write your MySQL query statement below.
      select distinct salary from Employee order by salary desc limit 1 offset N
  );
END