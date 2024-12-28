#include <stdio.h>
// #include "math.h"             --Redundant,Build later.
float arith();
float geo();
float alg();
float linear();
int main() {

    float op;

    //Code for the calculator
    printf("What genre of math would you like to solve today?\n");
    printf("\n1.Basic Arithmetic\n2.Geometry\n3.Algebra\n4.Linear\n\n");
    // 1 is Basic Arithmetic, 2 is Geometry, 3 is Algebra, 4 is Linear
    scanf("%f", &op);
    switch ((int)op) {
        case 1: {
            float answer = arith();

            printf("The result is: %.2f\n", answer);
            printf("Would you like to continue with the calculations? (y/N): ");
            char ans;
            scanf(" %c", &ans);
            if (ans == 'y' || ans == 'Y') {
                printf("\nStarting a new session.\n\n");
                main();
            }
            break;
        }
        case 2: {
            float answer = geo();

            printf("The result is: %.2f\n", answer);
            printf("Would you like to continue with the calculations? (y/n): ");
            char ans;
            scanf(" %c", &ans);
            if (ans == 'y' || ans == 'Y') {
                printf("\nStarting a new session.\n\n");
                main();
            }
            break;
        }
        case 3: {
            float answer = alg();

            printf("The result is: %.2f\n", answer);
            printf("Would you like to continue with the calculations? (y/n): ");
            char ans;
            scanf(" %c", &ans);
            if (ans == 'y' || ans == 'Y') {
                printf("\nStarting a new session.\n\n");
                main();
            }
            break;
        }
        case 4: {
            float answer = linear();

            printf("The result is: %.2f\n", answer);
            printf("Would you like to continue with the calculations? (y/n): ");
            char ans;
            scanf(" %c", &ans);
            if (ans == 'y' || ans == 'Y') {
                printf("\nStarting a new session.\n\n");
                main();
            }
            break;
        }
        default:
            printf("This operation is not yet supported, sorry.\n");
    }
    return 0; // Ensure main always returns a value
}

float arith() {
    float choice;
    printf("\nWhat arithmetic would you like me to perform?\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modular Division\n\n");
    scanf("%f", &choice);
    switch ((int)choice) {
        case 1: {
            float x, y;
            printf("\nEnter the first number: ");
            scanf("%f", &x);
            printf("Enter the second number: ");
            scanf("%f", &y);
            return x + y;
        }
        case 2: {
            float x, y;
            printf("\nEnter the first number: ");
            scanf("%f", &x);
            printf("Enter the second number: ");
            scanf("%f", &y);
            return x - y;
        }
        case 3: {
            float x, y;
            printf("\nEnter the first number: ");
            scanf("%f", &x);
            printf("Enter the second number: ");
            scanf("%f", &y);
            return x * y;
        }
        case 4: {
            float x, y;
            printf("\nEnter the first number: ");
            scanf("%f", &x);
            printf("Enter the second number: ");
            scanf("%f", &y);
            return x / y;
        }
        case 5: {
            float x, y;
            printf("\nEnter the first number: ");
            scanf("%f", &x);
            printf("Enter the second number: ");
            scanf("%f", &y);
            return (float)((int)x % (int)y);
        }
    }
    return 0; // Default return for invalid input
}

float geo() {
    float choice;
    printf("\nWhat kind of object am I performing this on?\n");
    printf("1.2D Object\n2.3D Object\n\n");
    scanf("%f", &choice);
    switch ((int)choice) {
        case 1: {
            float shape;
            printf("\nChoose a shape:\n");
            printf("1.Square\n2.Rectangle\n3.Circle\n4.Triangle\n");
            scanf("%f", &shape);
            switch ((int)shape) {
                case 1: {
                    float s;
                    printf("\nEnter the length of the side: ");
                    scanf("%f", &s);
                    return s * 4; // Perimeter of a square
                }
                case 2: {
                    float l, h;
                    printf("\nEnter the length: ");
                    scanf("%f", &l);
                    printf("Enter the height: ");
                    scanf("%f", &h);
                    return l * h; // Area of a rectangle
                }
                case 3: {
                    float r, pi = 3.14159;
                    printf("\nEnter the radius: ");
                    scanf("%f", &r);
                    return pi * r * r; // Area of a circle
                }
                case 4: {
                    float b, h;
                    printf("\nEnter the base: ");
                    scanf("%f", &b);
                    printf("Enter the height: ");
                    scanf("%f", &h);
                    return 0.5 * b * h; // Area of a triangle
                }
            }
            return 0; // Default for invalid 2D shape
        }
        case 2: {
            printf("\n3D calculations are not yet supported.\n");
            return 0;
        }
    }
    return 0; // Default for invalid choice
}

float alg() {
    float choice;
    printf("\nWhat basic algebra operation would you like to perform?\n");
    printf("1.Add coefficients (e.g., 3x + 5x)\n");
    printf("2.Simplify a constant expression (e.g., 2 + 5 - 3)\n");
    printf("3.Multiply coefficients (e.g., 2x * 3x)\n");
    scanf("%f", &choice);
    switch ((int)choice) {
        case 1: {
            float c1, c2;
            printf("\nEnter the first coefficient: ");
            scanf("%f", &c1);
            printf("Enter the second coefficient: ");
            scanf("%f", &c2);
            return c1 + c2;
        }
        case 2: {
            float term1, term2, term3;
            printf("\nEnter the first term: ");
            scanf("%f", &term1);
            printf("Enter the second term: ");
            scanf("%f", &term2);
            printf("Enter the third term: ");
            scanf("%f", &term3);
            return term1 + term2 - term3;
        }
        case 3: {
            float c1, c2;
            printf("\nEnter the first coefficient: ");
            scanf("%f", &c1);
            printf("Enter the second coefficient: ");
            scanf("%f", &c2);
            return c1 * c2;
        }
    }
    return 0; // Default return value
}

float linear() {
    float a, b, c, x;
    printf("\nEnter the coefficients and constant for the equation ax + b = c\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);
    x = (c - b) / a;
    return x;
}
