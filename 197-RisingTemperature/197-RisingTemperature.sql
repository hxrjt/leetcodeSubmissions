-- Last updated: 12/2/2025, 5:52:04 PM
select w2.id as Id from
weather as w1
join
weather as w2
on datediff(w2.recordDate,w1.recordDate)=1
-- on w2.recordDate-1=w1.recordDate
where w1.temperature<w2.temperature;