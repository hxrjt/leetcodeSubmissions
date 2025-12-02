-- Last updated: 12/2/2025, 5:49:46 PM
with temp as (
    select a.machine_id,a.process_id,round(b.timestamp - a.timestamp, 3) as processing_time
    from activity a
    join activity b 
    on a.machine_id = b.machine_id 
    and a.process_id = b.process_id
    where a.activity_type = 'start'
    and b.activity_type = 'end'
)
select machine_id, round(avg(processing_time),3) as processing_time from temp group by machine_id;
