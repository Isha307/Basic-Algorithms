# Python Program to make a simple calculator

# The add function adds two numbers
def add(x, y):
    return x + y

# This subtract function subtracts two numbers
def subtract(x, y):
    return x - y

# This multiply function multiplies two numbers
def multiply(x, y):
    return x * y

# This divide function divides two numbers
def divide(x, y):
    return x / y

print("Please select operation.")
print("1.Add")
print("2.Subtract")
print("3.Multiply")
print("4.Divide")

while True:
    # Get input from the user and assign it to choice
    choice = input("Enter choice(1/2/3/4): ")

    # Check if choice is one of the four options
    if choice in ('1', '2', '3', '4'):
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))

        if choice == '1':
            print(num1, "+", num2, "=", add(num1, num2))

        elif choice == '2':
            print(num1, "-", num2, "=", subtract(num1, num2))

        elif choice == '3':
            print(num1, "*", num2, "=", multiply(num1, num2))

        elif choice == '4':
            print(num1, "/", num2, "=", divide(num1, num2))
        break
    else:
        # if choice is not 1-4 print invalid input
        print("Invalid Input")
