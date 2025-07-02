/* Write your T-SQL query statement below */

select
    id,
    visit_date,
	people
from (
	select 
        id,
        visit_date,
		people,
        lag(people) over (order by id) as prev_1,
		lag(people,2) over (order by id) as prev_2,
		lead(people) over (order by id) as next_1,
		lead(people,2) over (order by id) as next_2
	from Stadium
) as temp
where people > 99 and next_1 > 99 and next_2 > 99
or people > 99 and prev_1 > 99 and next_1 > 99
or people > 99 and prev_1 > 99 and prev_2 > 99
