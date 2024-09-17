CREATE database AssigmentOne;

USE AssigmentOne;

-- QS 1 and 2: Create tables and Add proper constraints with the No 1 question
	-- A: Make a student table
	CREATE TABLE Student (
		Roll INT PRIMARY KEY UNIQUE,
		Name VARCHAR(30) NOT NULL, 
		Age INT CHECK(Age >= 5),
		Phone VARCHAR(15) NOT NULL
	);
    
    -- B: Make a Library table
	CREATE TABLE Library(
		HiredStudentID INT,
		BookName VARCHAR(50) NOT NULL,
		FOREIGN KEY (HiredStudentID) REFERENCES Student(Roll)
	);
    -- C: Make a Fees table
	CREATE TABLE Fees(
		StudentID INT,
        Amount INT NOT NULL,
        FOREIGN KEY (StudentID) REFERENCES Student(Roll)
    );

-- QS 3: Write the differences between data and information
	-- Differences Between Data and Information:
		-- DATA: Data consists of raw, unprocessed values are random and lack context.
		-- INFORMATION: Information is created when data is organized, processed, and presented in a structured way, making it meaningful and useful.
        
-- QS 4: In MySQL, Update and Delete query wasn’t executing, what was the reason and how to run those query? Write the code to enable the feature.
SET SQL_SAFE_UPDATES = 0;

CREATE TABLE Employee(
	EmployeeID INT PRIMARY KEY,
    FirstName VARCHAR(20),
    LastName VARCHAR(20),
    Age INT,
    Department VARCHAR(30)
);

INSERT INTO Employee(EmployeeID, FirstName, LastName, Age, Department) VALUES
	(1, 'John', 'Doe', 28, 'Sales'),
	(2, 'Jane', 'Smith', 32, 'Marketing'),
	(3, 'Michael', 'Johnson', 35, 'Finance'),
	(4, 'Sarah', 'Brown', 30, 'HR'),
	(5, 'William', 'Davis', 25, 'Engineering'),
	(6, 'Emily', 'Wilson', 28, 'Sales'),
	(7, 'Robert', 'Lee', 33, 'Marketing'),
	(8, 'Laura', 'Hall', 29, 'Finance'),
	(9, 'Thomas', 'White', 31, 'HR'),
	(10, 'Olivia', 'Clark', 27, 'Engineering');

-- QS5: Write a query to show the distinct department names
SELECT DISTINCT Department FROM Employee;

-- QS6: Write a query to show the LastNames of the employees sorted by descending ages 
SELECT LastName FROM Employee ORDER BY Age DESC;

-- QS7: Write a query to show the employee LastName whose age is greater than 30 and works in Marketing department
SELECT LastName FROM Employee WHERE Age > 30 AND Department = "Marketing";

-- QS8: Write a query to select all the employees
SELECT * FROM Employee;

-- QS9: Write a query to get employees whose names includes ‘son’
SELECT * FROM Employee WHERE FirstName LIKE "%son%" or LastName LIKE "%son%";

-- QS10: Write a query to get the engineers
SELECT * FROM Employee WHERE Department = "Engineering";
