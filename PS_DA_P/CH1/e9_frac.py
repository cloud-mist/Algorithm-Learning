# 写一个分数类

class Fraction:
    # 构造函数
    def __init__(self, top, bottom):
        self.num = top
        self.den = bottom

    # 用适当的格式打印
    def show(self):
        print(self.num,"/", self.den)

    # 转变每一块的内部数据为字符串，然后放置一个符号。结果会在Fraction对象要求转换为字符串时返回
    def __str__(self):
        return str(self.num)+"/"+str(self.den)

    def gcd(m, n):
        while m%n !=0:
            oldm = m
            oldn = n
            m = oldm
            n = oldm % oldn
            return n
    # 重载一个加法运算
    def __add__(self, otherfraction):
        newnum = self.num*otherfraction.den + self.den*otherfraction.num
        newden = self.den*otherfraction.den
        return Fraction(newnum, newden)

myf = Fraction(3, 5) # 创建一个实例
myf.show()
print(myf)
print("I ate", myf, "of the pizza")
print(myf.__str__())

f1 = Fraction(1, 2)
f2 = Fraction(1, 4)
f3 = f1 + f2
print(f3)                       # 6/8
