#include <stdio.h>
#include <stdbool.h>

// Function prototypes for each math operation and helper functions
float arith();
float geo();
float alg();
float linear();
float sort();
bool askToContinue();

// askToContinue() - Asks the user if they want to continue and returns true if they type 'y' or 'Y'
bool askToContinue() {
    char ans;
    printf("Would you like to continue with the calculations? (y/n): ");
    scanf(" %c", &ans);  // Read the user's response
    return (ans == 'y' || ans == 'Y');  // Return true if yes, false otherwise
}

// Main function - Contains a loop to repeatedly show the menu until the user decides to exit
int main() {
    bool continueSession = true;

    // Loop for repeated sessions
    while (continueSession) {
        float op;

        // Display the main menu of math genres
        printf("What genre of math would you like to solve today?\n");
        printf("1. Basic Arithmetic\n2. Geometry\n3. Algebra\n4. Linear\n5. Sorting\n");
        scanf("%f", &op);

        // Switch based on the user's selection
        switch ((int)op) {
            case 1: {
                // Call the arithmetic function and print the result
                float answer = arith();
                printf("The result is: %.2f\n", answer);
                break;
            }
            case 2: {
                // Call the geometry function and print the result
                float answer = geo();
                printf("The result is: %.2f\n", answer);
                break;
            }
            case 3: {
                // Call the algebra function and print the result
                float answer = alg();
                printf("The result is: %.2f\n", answer);
                break;
            }
            case 4: {
                // Call the linear equation function and print the result
                float answer = linear();
                printf("The result is: %.2f\n", answer);
                break;
            }
            case 5: {
                // Call the sorting function and print the result (0 is returned as default)
                float answer = sort();
                printf("The result is: %.2f\n", answer);
                break;
            }
            default:
                // If an unsupported option is selected
                printf("This operation is not yet supported, sorry.\n");
        }

        // Ask if the user wants to continue
        continueSession = askToContinue();
        if (continueSession) {
            printf("\nStarting a new session.\n\n");
        }
    }
    return 0;  // End of main function
}

// arith() - Performs basic arithmetic operations based on user selection
float arith() {
    float choice;
    // Ask which arithmetic operation to perform
    printf("Choose arithmetic operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modular Division\n");
    scanf("%f", &choice);

    switch ((int)choice) {
        case 1: {
            // Addition
            float x, y;
            printf("Enter first number: ");
            scanf("%f", &x);
            printf("Enter second number: ");
            scanf("%f", &y);
            return x + y;
        }
        case 2: {
            // Subtraction
            float x, y;
            printf("Enter first number: ");
            scanf("%f", &x);
            printf("Enter second number: ");
            scanf("%f", &y);
            return x - y;
        }
        case 3: {
            // Multiplication
            float x, y;
            printf("Enter first number: ");
            scanf("%f", &x);
            printf("Enter second number: ");
            scanf("%f", &y);
            return x * y;
        }
        case 4: {
            // Division - Check for division by zero
            float x, y;
            printf("Enter first number: ");
            scanf("%f", &x);
            printf("Enter second number (divisor): ");
            scanf("%f", &y);
            if (y == 0) {
                printf("Error: Division by zero\n");
                return 0;  // Return default value after error
            }
            return x / y;
        }
        case 5: {
            // Modular Division
            float x, y;
            printf("Enter first number: ");
            scanf("%f", &x);
            printf("Enter second number: ");
            scanf("%f", &y);
            return (float)((int)x % (int)y);
        }
    }
    return 0;  // Default return for invalid input
}

// geo() - Performs geometry calculations based on object type and shape
float geo() {
    float choice;
    printf("Choose object type:\n");
    printf("1. 2D Object\n2. 3D Object\n");
    scanf("%f", &choice);

    if ((int)choice == 1) {
        // 2D Object calculations
        float shape;
        printf("1. Square\n2. Rectangle\n3. Circle\n4. Triangle\n");
        scanf("%f", &shape);
        switch ((int)shape) {
            case 1: {
                float s;
                printf("Enter side length: ");
                scanf("%f", &s);
                return s * 4;  // Perimeter of a square
            }
            case 2: {
                float l, h;
                printf("Enter length: ");
                scanf("%f", &l);
                printf("Enter height: ");
                scanf("%f", &h);
                return l * h;  // Area of a rectangle
            }
            case 3: {
                float r, pi = 3.14159;
                printf("Enter radius: ");
                scanf("%f", &r);
                return pi * r * r;  // Area of a circle
            }
            case 4: {
                float b, h;
                printf("Enter base: ");
                scanf("%f", &b);
                printf("Enter height: ");
                scanf("%f", &h);
                return 0.5 * b * h;  // Area of a triangle
            }
        }
    } else if ((int)choice == 2) {
        // 3D Object calculations
        float shape;
        printf("1. Cube\n2. Sphere\n3. Triangular Prism\n");
        scanf("%f", &shape);
        switch ((int)shape) {
            case 1: {
                float side;
                printf("Enter side length: ");
                scanf("%f", &side);
                return side * side * side;  // Volume of a cube
            }
            case 2: {
                float radius, pi = 3.14159;
                printf("Enter radius: ");
                scanf("%f", &radius);
                return (4.0 / 3.0) * pi * radius * radius * radius;  // Volume of a sphere
            }
            case 3: {
                float base, height, length;
                printf("Enter base: ");
                scanf("%f", &base);
                printf("Enter height: ");
                scanf("%f", &height);
                printf("Enter length: ");
                scanf("%f", &length);
                return 0.5 * base * height * length;  // Volume of a triangular prism
            }
        }
    }
    return 0;  // Default return if no valid option selected
}

// alg() - Performs basic algebra operations
float alg() {
    float choice;
    printf("Choose algebra operation:\n");
    printf("1. Add coefficients\n2. Simplify expression\n3. Multiply coefficients\n");
    scanf("%f", &choice);

    switch ((int)choice) {
        case 1: {
            float c1, c2;
            printf("Enter first coefficient: ");
            scanf("%f", &c1);
            printf("Enter second coefficient: ");
            scanf("%f", &c2);
            return c1 + c2;
        }
        case 2: {
            float term1, term2, term3;
            printf("Enter first term: ");
            scanf("%f", &term1);
            printf("Enter second term: ");
            scanf("%f", &term2);
            printf("Enter third term: ");
            scanf("%f", &term3);
            return term1 + term2 - term3;
        }
        case 3: {
            float c1, c2;
            printf("Enter first coefficient: ");
            scanf("%f", &c1);
            printf("Enter second coefficient: ");
            scanf("%f", &c2);
            return c1 * c2;
        }
    }
    return 0;  // Default return for invalid input
}

// linear() - Solves a linear equation of the form ax + b = c
float linear() {
    float a, b, c;
    printf("Enter coefficients for equation ax + b = c\n");
    printf("a: ");
    scanf("%f", &a);
    if (a == 0) {  // Check for error: a cannot be 0
        printf("Error: a cannot be zero\n");
        return 0;
    }
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);
    return (c - b) / a;
}

// sort() - Sorts an array either in descending or ascending order
float sort() {
    int sel;
    printf("Sort order: 1 for DESCENDING, 2 for ASCENDING\n");
    scanf("%d", &sel);
    if (sel != 1 && sel != 2) {  // Validate sorting order
        printf("Invalid sorting order\n");
        return 0;
    }

    int la, inpi;
    printf("Enter array length: ");
    scanf("%d", &la);
    int array[la];  // Create an array of length la

    // Populate the array with user input
    for (inpi = 0; inpi < la; inpi++) {
        printf("Enter number %d: ", inpi + 1);
        scanf("%d", &array[inpi]);
    }

    int i, j, temp;
    if (sel == 1) {  // Descending order
        for (i = 0; i < la; i++) {
            for (j = i + 1; j < la; j++) {
                if (array[i] < array[j]) {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        printf("Sorted array (Descending): ");
    } else {  // Ascending order
        for (i = 0; i < la; i++) {
            for (j = i + 1; j < la; j++) {
                if (array[i] > array[j]) {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        printf("Sorted array (Ascending): ");
    }

    // Print the sorted array
    for (i = 0; i < la; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
