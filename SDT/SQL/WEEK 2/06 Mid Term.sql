use dummydb;

with max_salary as (select max(salary) from employees)

select max(salary) as second_max_salary from employees
where salary < (select max(salary) from employees);

select departments.department_name, avg(salary) 
from employees join departments 
	on departments.department_id = employees.department_id
    group by employees.department_id;
    

select avg(salary) from employees where department_id = 60;

with steven_salary as (select max(salary) from employees where first_name = "Steven")
select * from employees where salary < (select * from steven_salary);

select * from steven_salary;




select employees.job_id, count(*)
from employees join jobs on employees.job_id = jobs.job_id
group by employees.job_id;

select * from employees where department_id = 1;

select department_name from departments 
left join employees on departments.department_id = employees.department_id
where employees.employee_id is null;

-- Write the difference between Primary Key and Composite Primary Key
-- Primary key is a key which is 


create table Employees (
	employee_id INT primary key,
	first_name VARCHAR(50) not null,
    last_name VARCHAR(50) not null,
    date_of_birth DATE not null,
    department_id INT,
    salary DECIMAL not null,
    foreign key(department_id) references Departmentss(department_id)
);

create table Departments (
	department_id INT primary key,
    department_name VARCHAR(50) not null
);

