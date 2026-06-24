# Write your MySQL query statement below
SELECT patient_id, patient_name, conditions FROM Patients where conditions Like "DIAB1%" OR conditions Like "% DIAB1%";