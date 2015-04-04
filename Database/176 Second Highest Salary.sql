# Second Highest Salary 
# Source : https://leetcode.com/problems/second-highest-salary/
# Author : lzr
# Date	 : 2015/3/26

select max(Salary) as SecondHighestSalary
from Employee
where Salary < (select max(Salary) from Employee)
