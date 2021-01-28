# 我们自己制造一个终止异常。用raise
import math

anumber = int(input("please enter a number: "))
if anumber < 0:
    raise RuntimeError("you can't use a negative number")
else:
    print(math.sqrt(anumber))
