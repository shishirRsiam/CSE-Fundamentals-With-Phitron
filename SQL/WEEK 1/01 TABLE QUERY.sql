CREATE DATABASE Phitron IF NOT EXISTS;

CREATE TABLE IF NOT EXISTS Student (
    id INT PRIMARY KEY,
    name VARCHAR(50) NOT NULL,
    age INT CHECK (age <= 5)
);

ALTER TABLE Student
    ADD COLUMN roll INT UNIQUE;

CREATE TABLE IF NOT EXISTS Library (
    id INT PRIMARY KEY,
    student_id INT,
    book_name VARCHAR(100) UNIQUE
);

ALTER TABLE Library
    ADD CONSTRAINT fk_student_roll FOREIGN KEY (student_id) REFERENCES Student(roll);

-- Insert data into Student
INSERT INTO Student (id, name, age, roll) VALUES
(1, 'Alice', 5, 101),
(2, 'Bob', 4, 102),
(3, 'Charlie', 3, 103),
(4, 'Diana', 5, 104),
(5, 'Eva', 2, 105),
(6, 'Frank', 5, 106),
(7, 'Grace', 4, 107),
(8, 'Henry', 3, 108),
(9, 'Ivy', 5, 109),
(10, 'Jack', 2, 110),
(11, 'Kara', 1, 111),
(12, 'Leo', 4, 112),
(13, 'Mia', 5, 113),
(14, 'Nina', 3, 114),
(15, 'Oscar', 5, 115),
(16, 'Paul', 4, 116),
(17, 'Quinn', 2, 117),
(18, 'Ryan', 1, 118),
(19, 'Sophia', 5, 119),
(20, 'Tom', 4, 120);

-- Insert additional data into Student
INSERT INTO Student (id, name, age, roll) VALUES
(21, 'Uma', 3, 121),
(22, 'Vera', 5, 122),
(23, 'Will', 2, 123),
(24, 'Xena', 4, 124),
(25, 'Yara', 5, 125),
(26, 'Zane', 1, 126),
(27, 'Aaron', 4, 127),
(28, 'Bella', 3, 128),
(29, 'Cody', 5, 129),
(30, 'Daisy', 2, 130);

-- Insert additional data into Student
INSERT INTO Student (id, name, age, roll) VALUES
(31, 'Eli', 3, 131),
(32, 'Fiona', 5, 132),
(33, 'Gavin', 4, 133),
(34, 'Hannah', 2, 134),
(35, 'Ian', 5, 135),
(36, 'Jade', 1, 136),
(37, 'Kyle', 4, 137),
(38, 'Liam', 3, 138),
(39, 'Maya', 5, 139),
(40, 'Noah', 2, 140),
(41, 'Olivia', 4, 141),
(42, 'Parker', 5, 142),
(43, 'Quincy', 1, 143),
(44, 'Riley', 3, 144),
(45, 'Sam', 5, 145),
(46, 'Tina', 4, 146),
(47, 'Ulysses', 2, 147),
(48, 'Vince', 5, 148),
(49, 'Wendy', 1, 149),
(50, 'Xander', 4, 150),
(51, 'Yasmine', 3, 151),
(52, 'Zara', 5, 152),
(53, 'Adrian', 2, 153),
(54, 'Brooke', 4, 154),
(55, 'Charlie', 3, 155),
(56, 'Derek', 5, 156),
(57, 'Evelyn', 1, 157),
(58, 'Felix', 4, 158),
(59, 'Georgia', 5, 159),
(60, 'Henry', 2, 160);

-- Insert data into Library
INSERT INTO Library (id, student_id, book_name) VALUES
(1, 101, 'The Very Hungry Caterpillar'),
(2, 102, 'Brown Bear, Brown Bear, What Do You See?'),
(3, 103, 'Where the Wild Things Are'),
(4, 104, 'Goodnight Moon'),
(5, 105, 'The Cat in the Hat'),
(6, 106, 'Green Eggs and Ham'),
(7, 107, 'Chicka Chicka Boom Boom'),
(8, 108, 'Curious George'),
(9, 109, 'The Gruffalo'),
(10, 110, 'The Snowy Day'),
(11, 111, 'Madeline'),
(12, 112, 'Harold and the Purple Crayon'),
(13, 113, 'If You Give a Mouse a Cookie'),
(14, 114, 'Llama Llama Red Pajama'),
(15, 115, 'The Rainbow Fish'),
(16, 116, 'Pete the Cat: I Love My White Shoes'),
(17, 117, 'The Tale of Peter Rabbit'),
(18, 118, 'The Pigeon Finds a Hot Dog!'),
(19, 119, 'The Mitten'),
(20, 120, 'The Little Engine That Could');

-- Insert additional data into Library
INSERT INTO Library (id, student_id, book_name) VALUES
(21, 121, 'The Giving Tree'),
(22, 122, 'Chicka Chicka 1 2 3'),
(23, 123, 'A Bad Case of Stripes'),
(24, 124, 'Guess How Much I Love You'),
(25, 125, 'The Kissing Hand'),
(26, 126, 'Puff, The Magic Dragon'),
(27, 127, 'Where the Sidewalk Ends'),
(28, 128, 'The Berenstain Bears'),
(29, 129, 'Oh, The Places You’ll Go!'),
(30, 130, 'Winnie the Pooh'),
(31, 131, 'The Very Busy Spider'),
(32, 132, 'If You Give a Pig a Pancake'),
(33, 133, 'The Snowman'),
(34, 134, 'Brown Bear, Brown Bear, What Do You See? (Spanish Edition)'),
(35, 135, 'The Adventures of Tintin'),
(36, 136, 'The Tale of Despereaux'),
(37, 137, 'The Book Thief'),
(38, 138, 'The Chronicles of Narnia'),
(39, 139, 'Harry Potter and the Sorcerer’s Stone'),
(40, 140, 'Charlotte’s Web'),
(41, 141, 'Matilda'),
(42, 142, 'The Secret Garden'),
(43, 143, 'The Phantom Tollbooth'),
(44, 144, 'Anne of Green Gables'),
(45, 145, 'Little House on the Prairie'),
(46, 146, 'Holes'),
(47, 147, 'Percy Jackson & The Olympians: The Lightning Thief'),
(48, 148, 'The Hunger Games'),
(49, 149, 'Divergent'),
(50, 150, 'The Fault in Our Stars'),
(51, 151, 'The Maze Runner'),
(52, 152, 'The Giver'),
(53, 153, 'Wonder'),
(54, 154, 'Looking for Alaska'),
(55, 155, 'The Perks of Being a Wallflower'),
(56, 156, 'To Kill a Mockingbird'),
(57, 157, 'The Great Gatsby'),
(58, 158, '1984'),
(59, 159, 'Pride and Prejudice'),
(60, 160, 'The Catcher in the Rye');


-- Select to verify data
SELECT * FROM Student;
SELECT * FROM Library;




