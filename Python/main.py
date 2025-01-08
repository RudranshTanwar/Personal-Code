def arith():
    print("\nWhat arithmetic would you like me to perform?")
    print("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modular Division\n")
    choice = int(input("Enter your choice: "))

    if choice == 1:
        x = float(input("\nEnter the first number: "))
        y = float(input("Enter the second number: "))
        return x + y
    elif choice == 2:
        x = float(input("\nEnter the first number: "))
        y = float(input("Enter the second number: "))
        return x - y
    elif choice == 3:
        x = float(input("\nEnter the first number: "))
        y = float(input("Enter the second number: "))
        return x * y
    elif choice == 4:
        x = float(input("\nEnter the first number: "))
        y = float(input("Enter the second number: "))
        if y != 0:
            return x / y
        else:
            print("Error: Division by zero is not allowed.")
            return 0
    elif choice == 5:
        x = int(input("\nEnter the first number: "))
        y = int(input("Enter the second number: "))
        return x % y
    else:
        print("Invalid choice.")
        return 0

def main():
    print("What genre of math would you like to solve today?")
    print("\n1. Basic Arithmetic\n2. Geometry\n3. Algebra\n4. Linear\n5. Sorting\n")
    op = int(input("Enter your choice: "))

    if op == 1:
        answer = arith()
        print(f"The result is: {answer:.2f}")
        cont = input("Would you like to continue with the calculations? (y/n): ").lower()
        if cont == 'y':
            print("\nStarting a new session.\n")
            main()
    else:
        print("This operation is not yet supported, sorry.")

if __name__ == "__main__":
    main()
