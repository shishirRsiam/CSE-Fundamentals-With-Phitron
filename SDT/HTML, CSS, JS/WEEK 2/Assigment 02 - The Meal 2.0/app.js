const print = console.log;
print("Hello, World!");

let CartItems = [];

document.addEventListener("DOMContentLoaded", () => {
    const savedCart = sessionStorage.getItem("cartItems");
    CartItems = savedCart ? JSON.parse(savedCart) : [];
});

function clearCart() {
    CartItems = [];
    sessionStorage.removeItem("cartItems"); // Removes from session storage
}

const addItem = async (product_id) => {
    print("addItem CLiked");

    if (CartItems.length > 10) {
        alert("You cannot add more than 11 items to your cart.");
        return;
    }
    toastr.success("Your item has been added to the cart!");
    let url = "https://www.themealdb.com/api/json/v1/1/lookup.php?i=";
    let response = await fetch(url + product_id);
    let data = await response.json();
    let Product = data.meals[0];
    print(Product);
    print("CLiked Done");
    updateProductInfo(Product);
    CartItems.push(Product);
    print(`Item ${Product.strMeal} added to cart`);
    CartItems.forEach((p) => {
        print(p);
    });
    showCart();
};

const showCart = () => {
    print("Your Cart:");
    const cart_msg = document.querySelector("#cart-msg");
    if (CartItems.length == 0) {
        cart_msg.textContent = "Empty Cart"; // empty cart
    } else {
        cart_msg.textContent = `Your Cart: ${CartItems.length}`; // empty cart
    }

    let curts = document.querySelector("#carts");
    curts.innerHTML = "";
    print("ok");
    CartItems.forEach((Product) => {
        let newDiv = document.createElement("div");
        newDiv.innerHTML = `
                <div class="border p-2 mb-2 rounded">
                    <strong>${Product.strMeal}</strong>
                    <img
                        src="${Product.strMealThumb}"
                        alt="Teriyaki Chicken"
                        class="img-fluid rounded mt-1"
                        style="
                            height: 100px;
                            object-fit: cover;
                            width: 100%;
                        "
                    />
                </div>`;
        curts.appendChild(newDiv);
    });
};

showCart();

const clickedDetails = async (product_id) => {
    print("CLiked");

    let url = "https://www.themealdb.com/api/json/v1/1/lookup.php?i=";
    let response = await fetch(url + product_id);
    let data = await response.json();
    let Product = data.meals[0];
    print(Product);
    print("CLiked Done");
    updateProductInfo(Product);
};

const updateProductInfo = (Product) => {
    const div = document.querySelector("#showProductInfo");
    div.innerHTML = `
        <div class="modal-header">
            <h5 class="modal-title" id="exampleModalLabel">
                ${Product.strMeal}
            </h5>
            <button class="close" data-dismiss="modal" aria-label="Close">
                <span aria-hidden="true">&times;</span>
            </button>
        </div>
        
        <img
            src="${Product.strMealThumb}"
            class="card-img-top w-100 img-fluid rounded"
            alt="Delicious Meal"
            style="height: 250px; object-fit: cover"
        />
        
        <div class="modal-body">
            ${Product.strInstructions.slice(0, 130)}.
        </div>
        
        <div class="btn">
            <button class="btn btn-primary m-1">
                ${Product.strIngredient1}
            </button>
            <button class="btn btn-primary m-1">
                ${Product.strIngredient2}
            </button>
            <button class="btn btn-primary m-1">
                ${Product.strIngredient3}
            </button>
            <button class="btn btn-primary m-1">
                ${Product.strIngredient4}
            </button>
            <button class="btn btn-primary m-1">
                ${Product.strIngredient5}
            </button>
            <button class="btn btn-primary m-1">
                ${Product.strIngredient6}
            </button>
        </div>
        
        <div class="d-flex justify-content-center">
            <a
                href="${Product.strYoutube}"
                target="_blank"
                class="btn m-2 btn-danger d-flex align-items-center"
            >
                <i class="bi bi-youtube me-2"></i>
                YouTube
            </a>
            <a
                href="${Product.strMealThumb}"
                target="_blank"
                class="btn m-2 btn-danger d-flex align-items-center"
            >
                <i class="bi bi-image-fill me-2"></i>
                Img Src
            </a>
        </div>
        
        <div class="modal-footer">
            <button class="btn btn-secondary" data-dismiss="modal">
                Close
            </button>
        </div>
    `;
};

const ProccesingInputForProducts = async (input_value) => {
    let processedString = input_value.trim().replace(/ +/g, "_").toLowerCase();
    let url =
        "https://www.themealdb.com/api/json/v1/1/search.php?s=" +
        processedString;

    let response = await fetch(url);

    let data = await response.json();
    if (!data.meals) {
        const resultsh1 = document.querySelector("#results");
        resultsh1.textContent = `No Results Found for '${input_value}'`;
        return;
    }
    showingProducts(data.meals);
    const resultsh1 = document.querySelector("#results");
    resultsh1.textContent = `Results for '${input_value}' Products`;
};

const SearchButtonAction = () => {
    print("Search Button Action");

    window.scrollTo(0, 0);
    let old_products = document.querySelector(".showing-products");
    old_products.innerHTML = "";
    while (old_products.firstChild) {
        old_products.removeChild(old_products.firstChild);
    }
    const input = document.querySelector(".form-control");
    input_value = input.value;
    input.value = "";

    ProccesingInputForProducts(input_value);
};

const showingProducts = (Products) => {
    const productsList = document.querySelector(".showing-products");

    Products.forEach((Product) => {
        const div = document.createElement("div");
        div.classList.add("col-lg-4", "col-md-6", "mb-4");
        div.innerHTML = `
            <div class="p-3 border bg-light rounded">
                <h6>${Product.strMeal.slice(0, 20)}</h6>
                <img
                    src="${Product.strMealThumb}"
                    alt="${Product.strMeal}"
                    class="img-fluid rounded"
                    style="
                        height: 200px;
                        object-fit: cover;
                        width: 100%;
                    "
                />
                <div class="text-center">
                    <button
                        onclick="addItem('${Product.idMeal}')"
                        class="btn bg-success text-white m-2"
                    >
                        Add To Cart
                    </button>
                    <button
                        class="btn bg-info text-white m-2"
                        data-toggle="modal"
                        data-target="#exampleModal"
                        onclick="clickedDetails('${Product.idMeal}')" 
                    >
                        Details
                    </button>
                </div>
            </div>
        `;
        productsList.appendChild(div);
    });
};

const ShowAllProducts = async () => {
    let url = "https://www.themealdb.com/api/json/v1/1/search.php?f=";
    for (let ch = 97; ch <= 122; ch++) {
        const response = await fetch(url + String.fromCharCode(ch));
        const data = await response.json();
        const products = data.meals;
        if (products && products.length > 0) {
            showingProducts(products);
        }
    }
};

// ProductInfo();
ShowAllProducts();
