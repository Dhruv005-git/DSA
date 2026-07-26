# Write your MySQL query statement below
select person_name from 
(
    select turn, person_name, person_id, sum(weight) over(order by turn) as Running_sum from queue
) t where running_sum<=1000 order by turn desc limit 1;