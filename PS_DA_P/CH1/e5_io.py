# 1.输入 input函数
aName = input('please enter your name: ')
print("your name in all capitals is", aName.upper(), ", and has length", len(aName))

# 2.input 返回的是一个字符串，如果需要转换，必须明确转换。
Snumber = input("please enter a number:")
number = float(Snumber)
diameter = 2 * number
print("the result is", diameter)

# 3.格式化输出
print("hello",'world')              # 默认会以空格作为分割符        hello world
print('hello', 'world', sep="")     # 改变分隔符，这里为没有空格    helloworld
print('hello', 'world', end="*")    # 改变尾部                      hello world*


