# Write your MySQL query statement below
select name from employee where id in (select managerid
FROM employee
GROUP BY managerid
HAVING COUNT(managerid) >= 5);