while True:
   print("1. Addition")
   print("2. Subtraction")
   print("3. Multiplication")
   print("4. Division")
   print("5. Exit")
   print("Enter Your Choice: ", end="")
   choice = int(input())
   if choice>=1 and ch<=4:
      print("\nEnter Two Numbers: ", end="")
      num1 = float(input())
      num2 = float(input())
   if choice==1:
      res = num1 + num2
      print("\nResult =", res)
   elif choice==2:
      res = num1 - num2
      print("\nResult =", res)
   elif choice==3:
      res = num1 * num2
      print("\nResult =", res)
   elif choice==4:
      if(num2 != 0):
         res = num1 / num2
         print("\nResult =", res)
      else:
         print("Zero Division Error")
   elif choice==5:
      break
   else:
      print("\nTry Again!")
