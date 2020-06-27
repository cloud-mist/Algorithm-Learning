# 用递归编写一个 计算列表元素和函数
def sumfunc(list):
    if list == []:
        return 0
    return  list[0] + sumfunc(list[1:])

list1 = [2,4,5,7]
print(sumfunc(list1))
