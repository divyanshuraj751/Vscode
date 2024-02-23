try:
    x= int(input('Input an Integer: '))
    print(x)
except ValueError:
    print('Value Not a Integer')
else:
    print('Nothing Went Wrong') 