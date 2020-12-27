list1 = [1024, 3, True, 6.5]

list1.append(False)
print(list1)            # [1024, 3, True, 6.5, False]

list1.insert(2, 4.5)
print(list1)            # [1024, 3, 4.5, True, 6.5, False]

list1.pop()
print(list1)            # [1024, 3, 4.5, True, 6.5]

list1.pop(1)
print(list1)            # [1024, 4.5, True, 6.5]

list1.pop(2)
print(list1)            # [1024, 4.5,  6.5]

list1.sort()
print(list1)            # [4.5, 6.5, 1024]

list1.reverse()         # [1024, 6.5, 4.5]
print(list1)

a = list1.count(100)
print(a)                # 0

b = list1.index(4.5)
print(b)                # 2

list1.remove(6.5)
print(list1)            # [1024, 4.5]

del list1[0]
print(list1)            # [4.5]
