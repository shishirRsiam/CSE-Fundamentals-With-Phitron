-- Retrieve all records and all columns from the 'employees' table
SELECT * FROM employees;


-- Perform an INNER JOIN to select employee details along with their department name
-- The result will only include employees who have a matching department_id in the 'departments' table
SELECT employees.employee_id, employees.first_name, departments.department_name 
FROM employees 
JOIN departments 
ON employees.department_id = departments.department_id;


-- Perform a LEFT JOIN to select employee details along with their department name
-- Includes all employees, even if they do not have a matching department_id in 'departments'
-- For employees without a matching department, 'department_name' will be NULL
SELECT employees.employee_id, employees.first_name, departments.department_name 
FROM employees 
LEFT JOIN departments 
ON employees.department_id = departments.department_id;


-- Perform a RIGHT JOIN to select employee details along with their department name
-- Includes all departments, even if they do not have a matching employee in 'employees'
-- For departments without matching employees, 'employee_id' and 'first_name' will be NULL
SELECT employees.employee_id, employees.first_name, departments.department_name 
FROM employees 
RIGHT JOIN departments 
ON employees.department_id = departments.department_id;


-- self join
select * from employees as emp 
join employees as manager on emp.id = manager.id;


-- Perform a CROSS JOIN with a condition, which behaves like an INNER JOIN
-- Select employee details and department names for employees that have matching department_id
-- Without the condition (ON clause), this would return the Cartesian product of the two tables
SELECT employees.employee_id, employees.first_name, departments.department_name 
FROM employees 
CROSS JOIN departments 
ON employees.department_id = departments.department_id;


