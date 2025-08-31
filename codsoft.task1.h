a = int(input("enter first number:"))
b = int(input("enter second number:"))
operation = input("Enter the operation (+, -, *, /,% ,**): ")

def  add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    if x == 0:
        return "Error! Division by zero."
    return x / y

def modulo(x,y):
    return x % y

def exponent (x,y):
    return x ** y

def calculator():
     print("welcome to simple calculator")
     print("operation in calculator:")
     print("a.addition")
     print("b.subtraction")
     print("c.multiplication")
     print("d.division")
     print("e.modulo ")
     print("f.exponent ")
     print("g.exit")

     while True:
         try:
             choice = input("Enter operation (a/b/c/d/e/f/g): ")

             if choice == 'h':
                 print("Exiting calculator...")
                 break

             if choice not in ('a', 'b', 'c', 'd' , 'e' ,'f', 'g'):
                 print("Invalid input. Please try again.")
                 continue

             if choice == 'a':
                 print(f"Result: {a} + {b} = {add(a,b)}")
             elif choice == 'b':
                print(f"Result: {a} - {b} = {subtract(a,b)}")
             elif choice == 'c':
                print(f"Result: {a} * {b} = {multiply(a,b)}")
             elif choice == 'd':
                print(f"Result: {a} / {b} = {divide(a,b)}")
             elif choice == 'e':
                print(f"result:{a} % {b} = {modulo(a,b)}")
             elif choice == 'f':
                print(f"result:{a} ** {b} = {exponent (a,b)}")

         except ValueError:
               print("Invalid input. Please enter numbers only.")
         except Exception as e:
                print(f"An error occurred: {e}")

if __name__ == "__main__":
   calculator()
