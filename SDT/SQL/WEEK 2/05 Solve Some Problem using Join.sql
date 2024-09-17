-- Retrieve all records from the 'employees' table.
SELECT * FROM employees;


-- This query retrieves the first name of employees and their managers.
SELECT 
    man.first_name,       -- Select the first name of the manager.
    emp.first_name        -- Select the first name of the employee.
FROM employees AS emp      -- Use the 'employees' table as 'emp' to refer to employees.
JOIN employees AS man      -- Join the 'employees' table again as 'man' to refer to managers.
ON emp.employee_id = man.manager_id;  -- Specify the join condition, linking employees to their managers by employee_id and manager_id.


-- This query retrieves department names that do not have any associated employees.
SELECT departments.department_name  -- Select the name of the department.
FROM departments                  -- Specify the 'departments' table.
LEFT JOIN employees                    -- Perform a LEFT JOIN with the 'employees' table.
ON departments.department_id = employees.department_id  -- Join condition linking department_id in both tables.
WHERE employees.department_id IS NULL;  -- Filter to only include departments with no associated employees (where department_id is NULL).


-- This query retrieves employee names, their salaries, and the average salary in their department.
SELECT 
    employees.first_name,               -- Select the first name of the employee.
    employees.salary,                   -- Select the salary of the employee.
    (SELECT AVG(salary)                 -- Subquery to calculate the average salary in the employee's department.
     FROM employees WHERE department_id = employees.department_id) AS avg_salary,
     employees.salary - (SELECT AVG(salary)  -- Calculate the difference between the employee's salary and the department average.
     FROM employees WHERE department_id = employees.department_id) AS min_salary
FROM employees                            -- Specify the 'employees' table.
JOIN departments                          -- Join with the 'departments' table.
ON departments.department_id = employees.department_id;  -- Define the join condition.


-- This query retrieves department names with minimum and average salaries, filtering departments with a minimum salary greater than 3000.
SELECT 
    department_name,         -- Select the name of the department.
    MIN(salary),             -- Calculate the minimum salary in each department.
    AVG(salary)              -- Calculate the average salary in each department.
FROM employees                -- Specify the 'employees' table.
JOIN departments              -- Join with the 'departments' table.
ON employees.department_id = departments.department_id  -- Join condition linking department_id in both tables.
GROUP BY department_name          -- Group the results by department name to perform aggregations.
HAVING MIN(salary) > 3000;     -- Filter to only include departments where the minimum salary is greater than 3000.


-- This query calculates the average salary for each department.
SELECT 
    department_id,          -- Select the department ID.
    AVG(salary)             -- Calculate the average salary for the employees in that department.
FROM employees               -- Specify the 'employees' table as the data source.
GROUP BY department_id;          -- Group the results by department ID to aggregate salaries by department.
HAVING department_id = employees.department_id;  -- Filter the groups based on the department ID.


-- This query retrieves the average salary for each department along with the department name.
SELECT 
    employees.department_id,            -- Select the department ID from the employees table.
    departments.department_name,         -- Select the department name from the departments table.
    AVG(employees.salary) AS avg_salary  -- Calculate the average salary of employees in each department.
FROM employees                            -- Specify the 'employees' table as the main data source.
JOIN departments                          -- Join with the 'departments' table to associate departments with employees.
ON employees.department_id = departments.department_id  -- Define the join condition based on department_id.
GROUP BY 
    employees.department_id,             -- Group the results by department ID to aggregate salaries for each department.
    departments.department_name;         -- Include department name in the GROUP BY clause to ensure valid aggregation.

