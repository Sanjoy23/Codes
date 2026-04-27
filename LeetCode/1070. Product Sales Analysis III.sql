select s.product_id, s.year as first_year, s.quantity, s.price 
from sales s inner join (select s2.product_id, min(year) as year_s2 from sales s2 group by product_id) as t
on s.product_id = t.product_id
where s.year = t.year_s2