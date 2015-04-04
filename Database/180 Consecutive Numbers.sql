# Consecutive Numbers
# Source : https://leetcode.com/problems/consecutive-numbers/
# Author : lzr
# Date	 : 2015/3/27

SELECT DISTINCT S1.NUM FROM
	(SELECT L1.Id, L1.Num
	FROM Logs L1, Logs L2
	where L2.Id = L1.Id+1 and L2.Num=L1.Num) S1,
	(SELECT L1.Id, L1.Num
	FROM Logs L1, Logs L2
	where L2.Id = L1.Id+1 and L2.Num=L1.Num) S2
WHERE S2.Id = S1.Id+1 and S2.Num=S1.Num