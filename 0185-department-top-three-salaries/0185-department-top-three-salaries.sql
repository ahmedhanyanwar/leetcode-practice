with CTE as(
    select 
        d.name Department,
        e.name Employee,
        Salary,
        dense_rank() over (partition by d.id order by salary desc) rnk
    from employee e inner join department d on e.departmentid=d.id 
)
select
    Department,
    Employee ,
    Salary
from CTE
where rnk in (1,2,3);