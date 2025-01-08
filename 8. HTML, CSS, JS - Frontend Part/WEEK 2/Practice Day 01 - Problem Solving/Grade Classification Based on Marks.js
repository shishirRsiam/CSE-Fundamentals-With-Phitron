let marks = parseInt(prompt("Enter your marks: "));
let gradeCategory = "";

if (marks >= 80 && marks <= 100) {
    gradeCategory = "A+";
} else if (marks >= 70 && marks < 80) {
    gradeCategory = "A";
} else if (marks >= 60 && marks < 70) {
    gradeCategory = "A-";
} else if (marks >= 50 && marks < 60) {
    gradeCategory = "B";
} else if (marks >= 40 && marks < 50) {
    gradeCategory = "C";
} else if (marks >= 33 && marks < 40) {
    gradeCategory = "D";
} else {
    gradeCategory = "Fail";
}

console.log(`Grade: ${gradeCategory}`);
