# Department Top Three Salaries
# Source : https://leetcode.com/problems/department-top-three-salaries/
# Author : lzr
# Date	 : 2015/3/27

SELECT D.Name as Department, E.Name as Employee, Salary
FROM (SELECT * FROM Employee E1
 WHERE (SELECT COUNT(DISTINCT Salary) FROM Employee E2
    WHERE E2.DepartmentId=E1.DepartmentId and E2.Salary>E1.Salary)<3
 ORDER BY DepartmentId ASC, Salary DESC) E
JOIN Department D on E.DepartmentId=D.Id

# 感觉与Rank scores思路有一点点类似