a = [1,2,3,4,5,6,7,8]

# for i in range(0,len(a),2):
# 	print(a[i], end=' | ')

b = a[0:len(a):2]
print(b)

#会写代码，非常容易 高性能 封装性 抽象 
#包名就是文件名 模块就是文件名
class ClassName(object):
	"""docstring for ClassName"""
	def __init__(self, arg):
		super(ClassName, self).__init__()
		self.arg = arg
