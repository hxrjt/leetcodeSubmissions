-- Last updated: 12/2/2025, 5:49:52 PM
# Write your MySQL query statement below
select patient_id,patient_name,conditions from patients where conditions like '% DIAB1%' or conditions like 'DIAB1%';