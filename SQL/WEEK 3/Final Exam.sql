select * from book order by AvailableCopies desc;

set SQL_SAFE_UPDATES = off;
update book set AvailableCopies = AvailableCopies - 1
where ISBN = '9781234567890';

insert into Borrowing (BorrowId, StudentID, ISBN, BorrowDate, DueDate, ReturnDate) values (
	105001, -- BorrowId
    2, -- StudentID
    (select ISBN from book order by AvailableCopies desc limit 1), -- ISBN
    curdate(), -- BorrowDate
    date_add(curdate(), interval 1 day), -- DueDate
    date_add(curdate(), interval 10 day) -- ReturnDate
);


with MaxCount as (select count(*) from borrowing 
		group by studentid 
        order by count(*) desc limit 1)

select Student.name from Student join Borrowing 
on Student.StudentId = Borrowing.StudentId
group by Borrowing.StudentId having count(*) = (select * from MaxCount);

create table Department (
    DepartmentID int primary key,
    DepartmentName VARCHAR(15)
);

CREATE TABLE Employee (
    EmployeeID int primary key,
    Name VARCHAR(100) not null,
    DepartmentID int,
    foreign key (DepartmentID) references Department(DepartmentID) on delete cascade
);

create table JobHistory (
    JobHistoryID int primary key,
    EmployeeID int,
    JobTitle VARCHAR(20),
    StartDate date,
    EndDate date,
    foreign key (EmployeeID) references Employee(EmployeeID) on delete set null
);

select * from borrowing where ReturnDate is null and DueDate < CURDATE();


select * from borrowing;
select * from book order by AvailableCopies desc;


SELECT *
FROM BORROWING
WHERE RETURNDATE < CURDATE();


