# 参数
# 1. 必须参数 第一个必须传x,第二个必须传y
# 2. 关键字参数 y=3, x=2
# 3. 默认参数

def add(x, y):
	#形式参数 参数
	result = x + y
	return result

c = add(y=3, x=2)
#代码的可读性
print(c)