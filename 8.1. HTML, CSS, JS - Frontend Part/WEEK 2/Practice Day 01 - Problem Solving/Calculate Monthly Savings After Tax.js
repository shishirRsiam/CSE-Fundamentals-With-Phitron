function monthlySavings(arr, num) {
    if (!Array.isArray(arr) || typeof num !== "number") {
        return "Invalid Input";
    }

    let saving = 0;
    arr.forEach((element) => {
        if (element >= 3000) {
            let afterTax = element - (20 / 100) * element;
            saving += afterTax;
        } else {
            saving += element;
        }
    });

    if (saving - num < 0) {
        return "Earn More";
    } else {
        return saving - num;
    }
}

const result = monthlySavings([1000, 2000, 3000], 100);
console.log(result);
