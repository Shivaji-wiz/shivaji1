# Write your MySQL query statement below
select name as Customers from Customers
where id not in (select c.id from customers c inner join orders o
on c.id=o.customerId)