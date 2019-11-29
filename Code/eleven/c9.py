
# def f1():
# 	a = 10
# 	def f2():
# 		# a此时将被python认为是一个局部变量
# 		a = 20
# 		print(a)
# 	print(a)
# 	f2()
# 	print(a)

def f1():
	a = 10
	def f2():
		# a被python认为是一个局部变量
		a = 20
	return f2

f = f1()
print(f)
print(f.__closure__)