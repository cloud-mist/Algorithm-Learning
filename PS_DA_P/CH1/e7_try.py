import math
anumber = int(input("please enter an integer: "))

# 有可能会存在输入负值的情形，用try模块处理。
try:
    print(math.sqrt(anumber))
except:
    print("bad value fos square root")
    print("using absolute value instead")
    print(math.sqrt(abs(anumber)))
