# Nth Highest Salary 
# Source : https://leetcode.com/problems/nth-highest-salary/
# Author : lzr
# Date	 : 2015/3/26

CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  set N = N-1;
  RETURN (
      # Write your MySQL query statement below.
      select distinct Salary from Employee order by Salary DESC limit N,1
  );
END

# limit m,n     返回第(m+1)到(m+n)条记录