/* Write your T-SQL query statement below */
select 
    E1.name as Employee
from Employee as E1 join Employee as E2
on E1.managerId = E2.id and E1.salary > E2.salary;