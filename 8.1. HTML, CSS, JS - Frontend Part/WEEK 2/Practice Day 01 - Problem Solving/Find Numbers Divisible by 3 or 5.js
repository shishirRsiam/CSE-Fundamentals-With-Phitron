const arr = [];

for (let i = 1; i <= 50; i++) {
    if (i % 3 === 0 || i % 5 === 0) {
        arr.push(i);
    }
}

console.log(arr);
