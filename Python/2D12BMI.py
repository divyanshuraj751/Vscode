h=input("Input the height in meters\n")
w=input("Enter the weight\n")
bmi = float(w)/(float(h)*float(h))
if(bmi<18.5):
   print("Underweight")
elif(bmi>=18.5 and bmi<25):
   print("Normal Weight")
elif(bmi>=25 and bmi<30):
   print("OverWeight")
else:
   print("Obese")