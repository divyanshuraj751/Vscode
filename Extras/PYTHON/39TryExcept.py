try:
    x = int(input('Input an Integer :'))
    print(x)
except:
    print('Something Went Wrong')
finally:
    print('Try except finished')