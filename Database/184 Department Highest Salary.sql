# Department Highest Salary
# Source : https://leetcode.com/problems/department-highest-salary/
# Author : lzr
# Date	 : 2015/3/27

# 1st
SELECT DE.Department, Employee, DS.Salary FROM
(SELECT D1.`Name` as Department, E1.`Name` as Employee, Salary
 FROM Employee E1 JOIN Department D1
 ON E1.DepartmentId=D1.Id) DE,
 (SELECT D2.`Name` as Department, MAX(Salary) as Salary
 FROM Employee E2 JOIN Department D2
 ON E2.DepartmentId=D2.Id
 GROUP BY Department) DS
WHERE DE.Department=DS.Department and DE.Salary = DS.Salary

# 2nd
select D.Name as Department, E1.Name as Employee, E2.ms as Salary from
(select * from Employee) E1,
(select DepartmentId, max(Salary) as mS 
from Employee group by DepartmentId) E2
join Department D on E2.DepartmentId = D.Id
where E1.DepartmentId = E2.DepartmentId and E1.Salary = E2.mS 