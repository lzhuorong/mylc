# Customers Who Never Order 
# Source : https://leetcode.com/problems/customers-who-never-order/
# Author : lzr
# Date	 : 2015/3/27

# solution 1:
select Name as Customers
from Customers C LEFT JOIN Orders O
on C.Id = O.CustomerId
where O.Id is Null

# solution 2:
select Name as Customers
from Customers
where Id not in (select CustomerId from Orders)