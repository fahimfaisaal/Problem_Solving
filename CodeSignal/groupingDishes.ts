// Hash map interview problem

interface DishMap {
    [key: string]: Set<string>
}

interface DishAndIngredients {
    dishes: DishMap,
    ingredients: Set<string> | null
}

let dishAndIngredients: DishAndIngredients = {
    dishes: {},
    ingredients: null
}

// group dishes function 
function solution(dishes: string[][]): string[][] {
    // fill the dishAndIngredients object
    dishAndIngredients = dishes.reduce(dishAndIngredientsReducer, dishAndIngredients)
    const sortIngredients: string[] = Array.from(dishAndIngredients.ingredients as Set<string>).sort();

    return sortIngredients.reduce(categoryReducer, []);
}

// fill the dish and ingredients Object via reducer
function dishAndIngredientsReducer(dishAndIngredients: DishAndIngredients, arrayOfDishes: string[]): DishAndIngredients {
    const dishName: string = arrayOfDishes.shift()!;
    const { dishes, ingredients } = dishAndIngredients;

    dishes[dishName] = new Set(arrayOfDishes);    
    dishAndIngredients.ingredients = ingredients ?
        new Set([...ingredients, ...arrayOfDishes])
        : new Set(arrayOfDishes);

    return dishAndIngredients;
}

// categories the ingredients
function categoryReducer(categories: string[][], ingredient: string): string[][] {
    const { dishes } = dishAndIngredients;
    const category: string[] = [ingredient];
    const dishKeys: string[] = Object.keys(dishes).sort();

    dishKeys.forEach(dish => {
        if (dishes[dish].has(ingredient)) {
            category.push(dish);
        }
    })

    return category.length > 2 ? [...categories, category] : categories
}

const dishesArr: string[][] = [
    ["Salad", "Tomato", "Cucumber", "Salad", "Sauce"],
    ["Pizza", "Tomato", "Sausage", "Sauce", "Dough"],
    ["Quesadilla", "Chicken", "Cheese", "Sauce"],
    ["Sandwich", "Salad", "Bread", "Tomato", "Cheese"]
]

console.log(solution(dishesArr));
