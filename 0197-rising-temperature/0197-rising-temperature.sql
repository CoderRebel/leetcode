# Write your MySQL query statement below
select e.id from weather e join weather p on e.recordDate = DATE_ADD(p.recordDate , interval 1 day) where e.temperature > p.temperature;