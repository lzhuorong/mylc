# Employees Earning More Than Their Managers
# Source : https://leetcode.com/problems/employees-earning-more-than-their-managers/
# Author : lzr
# Date	 : 2015/3/27

SELECT E1.Name as Employee
from Employee E1 LEFT JOIN Employee E2 on E1.ManagerId = E2.Id
WHERE E1.Salary > E2.Salary