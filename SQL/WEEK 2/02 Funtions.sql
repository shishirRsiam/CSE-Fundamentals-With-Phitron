select * from customers;
select * from employees;
select * from orderdetails;
select * from orders;
select * from payments;

select * from payments order by amount limit 1, 10;

select * from payments 
where paymentDate >= "2005-05-15"
order by customerNumber desc;

select * from payments order by amount;

select customerNumber, paymentDate, round(amount) 
from payments order by amount; 

select customerNumber, paymentDate, ceil(amount) 
from payments order by amount;

select customerNumber, paymentDate, sum(amount) 
from payments;

select count(amount) from payments;


