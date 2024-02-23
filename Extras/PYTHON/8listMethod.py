list1 = [1,2,3,4,5]
list2 = ['banana','apple', 'mango', 'oranges']
list1.extend(list2)
print(list1)
list2.append('Cherry')
print(list2)
print(len(list2))
list3= ['banana', 'Grapes', 'Mango', 'Oranges']
list3.insert(1,'Cherry')
print(list3)
list3.remove('banana')
print(list3)
list2.clear()
print(list2)
print(list3.index('Mango'))
print(list3.count('Mango'))

list4 = [4,6,2,1,7]
list4.sort()
print(list4)
list3.reverse()
print(list3)

list5 = list3.copy()
print(list5)
list5.remove('Cherry')
print(list5)

list7 = [1,3,5,6,7]
print(list7)
del list7
print(list7)