SELECT * FROM Student WHERE AGE >= 5 and roll <= 110 ORDER BY ID DESC;

SELECT * FROM Student WHERE NAME like 'E%';
SELECT * FROM Student WHERE NAME like '%n%';

SELECT * FROM Student WHERE name IN ('Diana', 'David', 'Daniel');

SELECT * FROM Student;

SELECT * FROM Student WHERE name LIKE '%a%' 
						  OR name LIKE '%e%' 
						  OR name LIKE '%i%' 
						  OR name LIKE '%o%' 
						  OR name LIKE '%u%';

SELECT * FROM Student WHERE name LIKE '%a%' 
						  AND name LIKE '%e%' 
						  AND name LIKE '%i%' 
						  OR name LIKE '%o%' 
						  OR name LIKE '%u%';


SELECT * FROM Student 
WHERE POSITION('a' IN name) > 0 
  AND POSITION('e' IN name) > 0 
  AND POSITION('i' IN name) > 0 
  AND POSITION('o' IN name) > 0 
  AND POSITION('u' IN name) > 0;


SELECT * FROM Student WHERE name SIMILAR TO '%[aeiou]%';



