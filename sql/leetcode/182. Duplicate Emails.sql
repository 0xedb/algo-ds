# Write your MySQL query statement below
Select Email from 
(SELECT Email, count(Email) as num
from Person
Group by Email) as tab
where num > 1
;