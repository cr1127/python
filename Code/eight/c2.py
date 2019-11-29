
# def function():
# 	pass

# 1. 参数列表可以没有
# 2. return value None
import sys
sys.setrecursionlimit(1000000)


# 1. 实现两个数字的相加
# 2. 打印输入的参数
def add(x, y):
	#形式参数 参数
	result = x + y
	return result


def print_code(code):
	print(code)


a = add(1,2) #实际参数 参数
b = print_code('Python')
print(a, b)