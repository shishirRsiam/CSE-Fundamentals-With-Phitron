let numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5];

let uniqueNumbers = [...new Set(numbers)];

console.log("Unique Numbers:", uniqueNumbers);
console.log("Maximum Value:", Math.max(...uniqueNumbers));
