# Write your MySQL query statement below

select 
product_name, year , price
from Sales as t
left join  Product as p
on t.product_id = p.product_id;