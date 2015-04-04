# Rank Scores
# Source : https://leetcode.com/problems/rank-scores/
# Author : lzr
# Date	 : 2015/3/27

SELECT S1.Score, (SELECT COUNT(DISTINCT Score)+1 FROM Scores S2 where S2.Score>S1.Score) as Rank
FROM Scores S1
ORDER BY S1.Score DESC

# Rank其实就是说有几个数比它大，比它大的数少它的排名就靠前（Rank值小）