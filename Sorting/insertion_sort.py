def insertion_sort(mylist):
    for i in range(1, len(mylist)):
        temp = mylist[i]
        j = i - 1
        while (j >= 0 and temp < mylist[j]):
            mylist[j + 1] = mylist[j]
            j = j - 1
        mylist[j + 1] = temp
 
 
mylist= input('Enter the list of numbers: ').split()
mylist= [int(x) for x in mylist]
insertion_sort(mylist)
print('Sorted list: ', end='')
print(mylist)