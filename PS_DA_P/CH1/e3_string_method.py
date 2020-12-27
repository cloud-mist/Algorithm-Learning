''' 
1.字符串是序列， 前面的运算可以用于它。
2.还有一些特有的方法
3.列表和字符串的区别，列表可以被修改，字符串不行。
4.元组:和列表相似，但是不能被修改.
'''


myname = 'clouD_mist'

b = myname.upper()
print(b)                # CLOUD_MIST
b = myname.lower()
print(b)                # cloud_mist

c = myname.center(20)
print("*"+c+"*")        #*     clouD_mist     *
c = myname.rjust(20)
print("*"+c+"*")        #*          clouD_mist*

d = myname.find('m')
print(d)                # 6

a = myname.split('_')
print(a)                # ['clouD', 'mist']
