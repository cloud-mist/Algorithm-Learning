# 计算列表的元素个数
def count(list):
    if list == []:
        return 0
    return 1 + count(list[1:])

a = [1,2,3,4,5]
b = [3,4]
print(count(a))
print(count(b))
