# 
x = {'david':123, 'brad':235}

a = x.keys()    #1.返回键对象
print(a)        # dict_keys(['david', 'brad'])
a = list(a)     # 转换成list 
print(a)        # ['david', 'brad']

b = x.values()  #2.返回值对象
print(b)        # dict_values([123, 235])
b = list(b)
print(b)        # [123, 235]

c = x.items()   #3.返回键值对对象
print(c)        # dict_items([('david', 123), ('brad', 235)])
c = list(c)
print(c)        # [('david', 123), ('brad', 235)]

d = x.get("kent")#4.返回kent对应的值，没有返回none
print(d)        # None
d= x.get("kent", "不存在") #4.2没有返回第二个指定的参数
print(d)        # 不存在
