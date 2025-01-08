const print = console.log;
print("Hello, World!");

const ProccesingInputForProducts = async (input_value) => {
    let processedString = input_value.trim().replace(/ +/g, "_").toLowerCase();
    // print("from Funtion ProccesingInputForProducts");
    // print(processedString);
    let url =
        "https://www.themealdb.com/api/json/v1/1/search.php?s=" +
        processedString;

    let response = await fetch(url);

    let data = await response.json();
    if (!data.meals) {
        const resultsh1 = document.querySelector("#results");
        resultsh1.textContent = `No Resuls Products for '${input_value}'`;
        return;
    }
    showingProducts(data.meals);
    const resultsh1 = document.querySelector("#results");
    resultsh1.textContent = `Resuls Products for '${input_value}'`;
};

const SearchButtonAction = () => {
    window.scrollTo(0, 0);
    const product_info_conteiner = document.querySelector(".info");
    product_info_conteiner.innerHTML = "";
    // print("Search button clicked");
    let old_products = document.querySelector(".showing-products");
    // print(old_products);
    old_products.innerHTML = "";
    while (old_products.firstChild) {
        old_products.removeChild(old_products.firstChild);
    }
    const input = document.querySelector(".form-control");
    input_value = input.value;
    input.value = "";
    // print(input_value);

    ProccesingInputForProducts(input_value);
};

const showingProducts = (Produts) => {
    const productsList = document.querySelector(".showing-products");

    Produts.forEach((Produt) => {
        const div = document.createElement("div");
        div.classList.add("col-md-3", "mb-4");
        div.style.cursor = "pointer";
        div.addEventListener("click", () => {
            ProductInfo(Produt.idMeal);
        });
        div.innerHTML = `
                    <div class="card">
                        <img
                            src="${Produt.strMealThumb}"
                            class="card-img-top"
                            alt="Meal Image"
                        />
                        <div class="card-body">
                            <h5 class="card-title">${Produt.strMeal.slice(
                                0,
                                22
                            )}</h5>

                        </div>
                    </div>
        `;
        productsList.appendChild(div);
    });
};

const ShowAllProducts = async () => {
    let url = "https://www.themealdb.com/api/json/v1/1/search.php?f=";
    for (let ch = 97; ch <= 122; ch++) {
        // print(String.fromCharCode(ch));
        const response = await fetch(url + String.fromCharCode(ch));
        const data = await response.json();
        const products = data.meals;
        if (products && products.length > 0) {
            showingProducts(products);
        }
        // print(products);
    }
};

const showingError = () => {};
const showingProductInfo = (Product) => {
    window.scrollTo(0, 0);
    const product_info_conteiner = document.querySelector(".info");
    product_info_conteiner.innerHTML = "";
    // print("Join Product Info");
    // print(product_info_conteiner);
    // print(Product);

    const div = document.createElement("div");
    // div.innerHTML = `
    //             <h2>Product Information</h2>`;
    div.innerHTML = `;
                <h2>Product Information</h2>
                <div class="info card mt-2 mb-5 custom-card" style="width: 19rem;">
                    <img
                        src="${Product.strMealThumb}"
                        class="card-img-top mx-auto mt-3"
                        alt="Card Image"
                        style="width: 15rem;"
                    />
                    <div class="card-body ">
                        <h5 class="card-title">${Product.strMeal}</h5>
                        ${Product.strInstructions.slice(0, 60)}
                        <p class="card-text d-inline mt-5">
                            <ul class="list-unstyled ms-3 mt-2">
                            <li> ${Product.strIngredient1} </li>
                            <li> ${Product.strIngredient2} </li>
                            <li> ${Product.strIngredient3} </li>
                            <li> ${Product.strIngredient4} </li>
                            <li> ${Product.strIngredient5} </li>
                            <li> ${Product.strIngredient6} </li></ul>
                        </p>
                    </div>
                </div>
                `;
    // print("Print Product From  Function", Product);
    product_info_conteiner.appendChild(div);
};

const ProductInfo = async (product_id) => {
    let url = "https://www.themealdb.com/api/json/v1/1/lookup.php?i=";

    print(url + product_id);
    // return;

    let response = await fetch(url + product_id);

    const resultsh1 = document.querySelector("#results");
    if (!response.ok) {
        resultsh1.textContent = `Error fetching data: '${response.status}'`;
        print("Error fetching data:", response.status);
        return;
    }

    let data = await response.json();
    if (data.meals && data.meals.length > 0) {
        let Product = data.meals[0];
        showingProductInfo(Product);
    } else {
        resultsh1.textContent = "No meal data found.";
        print("No meal data found.");
    }
};

// ProductInfo();
ShowAllProducts();
