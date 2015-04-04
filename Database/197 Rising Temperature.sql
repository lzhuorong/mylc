# Rising Temperature
# Source : https://leetcode.com/problems/rising-temperature/
# Author : lzr
# Date	 : 2015/4/3

select w1.Id from Weather w1, Weather w2
where w1.Date = date_add(w2.Date, interval 1 day) 
and w1.Temperature > w2.Temperature