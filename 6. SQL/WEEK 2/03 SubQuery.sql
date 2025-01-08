-- Print all employees who have the job title 'Programmer'
USE dummydb;

SELECT * 
FROM EMPLOYEES 
WHERE JOB_ID = (
    -- Subquery to find the job_id of 'Programmer'
    SELECT JOB_ID 
    FROM JOBS
    WHERE JOB_TITLE = 'Programmer'
);

-- If you want to use an aggregate function like SUM, AVG, or COUNT, apply it to the main query.
-- Example: Count the number of 'Programmers' in the employees table.
SELECT COUNT(*) 
FROM EMPLOYEES 
WHERE JOB_ID = (
    SELECT JOB_ID 
    FROM JOBS
    WHERE JOB_TITLE = 'Programmer'
);


-- Print the second-highest salary from the employees table.
SELECT MAX(SALARY) 
FROM EMPLOYEES 
WHERE SALARY < ( 
    -- Subquery to find the highest salary, so we can filter out the top one
    SELECT MAX(SALARY) 
    FROM EMPLOYEES 
);

-- Print the employee information of the person with the second-highest salary.
SELECT * 
FROM EMPLOYEES 
WHERE SALARY = (
    -- Subquery to get the second-highest salary
    SELECT MAX(SALARY) 
    FROM EMPLOYEES
    WHERE SALARY < ( 
        -- Subquery to get the highest salary
        SELECT MAX(SALARY) 
        FROM EMPLOYEES
    )
);


-- Print all employees who earn a salary greater than their manager's salary.
SELECT * 
FROM EMPLOYEES AS emp
WHERE SALARY > (
    -- Subquery to get the manager's salary by matching employee's manager_id with the manager's employee_id
    SELECT SALARY 
    FROM EMPLOYEES AS mng
    WHERE emp.MANAGER_ID = mng.EMPLOYEE_ID
);


-- Print all employees where the job ID and manager's job ID are the same.
SELECT * 
FROM EMPLOYEES AS emp
WHERE JOB_ID = (
    -- Subquery to get the manager's job ID by matching employee's manager_id with the manager's employee_id
    SELECT JOB_ID 
    FROM EMPLOYEES AS mng
    WHERE emp.MANAGER_ID = mng.EMPLOYEE_ID
);
