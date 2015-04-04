# Duplicate Emails 
# Source : https://leetcode.com/problems/duplicate-emails/
# Author : lzr
# Date	 : 2015/3/27

select DISTINCT(E1.Email) as Email
from Person E1, Person E2
where E1.Id<E2.Id and E1.Email=E2.Email