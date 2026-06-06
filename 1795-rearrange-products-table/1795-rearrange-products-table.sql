# Write your MySQL query statement below
SELECT product_id, 'store1' as store, store1 as price FROM Products where store1 is NOT NULL Union all 
SELECT product_id, 'store2', store2  FROM Products  where store2 is NOT NULL union all
SELECT product_id , 'store3', store3 FROM Products where store3 is NOT NULL 