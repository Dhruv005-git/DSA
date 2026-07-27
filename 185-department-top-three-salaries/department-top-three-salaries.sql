# Write your MySQL query statement below
select d.Name as 'Department', e.Name as 'Employee', e.Salary
from (select DepartmentId, Name, Salary, DENSE_RANK() OVER(partition by departmentid order by salary desc) as r from employee) e join department d on e.departmentid = d.id where r<=3;