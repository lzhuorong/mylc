# Delete Duplicate Emails
# Source : https://leetcode.com/problems/delete-duplicate-emails/
# Author : lzr
# Date	 : 2015/4/3

# 1st solution
delete from Person 
where Id in (select b.Id from Person a, Person b
where a.Email = b.Email and a.Id < b.Id)
# Runtime Error: You cant specify target table 'Person' for update in FROM clause
# 原因：Mysql中不支持这种写法，不能先select出同一表中的某些值，再update这个表(在同一语句中)。 

# 2nd solution
delete from Person 
where Id in ( select * from
(select b.Id from Person a, Person b
where a.Email = b.Email and a.Id < b.Id)c)
# Accept
# 将第一次select的结果通过中间表再select一次即可