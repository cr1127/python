
# 面向对象
# 有意义的面向对象的代码
# 类 = 面向对象
# 类 对象
# 实例化
# 类最基本的作用：封装
# 类和 对象




# 模板
# 类名的首字母大写
class Student():
	#定义若干变量
	#类变量
	#一个班级里所有学生的总数
	sum = 0
	name = 'queue'
	age = 0
	#'类变量' "实例变量"
	def __init__(self, name, age):
		#构造函数
		#初始化对象的属性
		#实例变量
		self.name = name
		self.age = age
		# print('student')
		# return 'student'
		# TypeError: __init__() should return None, not 'str'
	#定义函数
	#行为 与 特征
	def do_homework(self):
		print("hmework")

class Printer():
	def print_file(self):
		print('name:' + self.name)
		print('age:' + str(self.age))



# 方法 和 函数的区别
# c c++ java c#
# 方法：设计层面 
# 函数：程序运行 过程是的一种称谓
#实例化		
student1 = Student('石敢当', 18)
student2 = Student('喜小乐', 19)
print(student1.name)
print(student2.name)
print(Student.name)
# 对象的所有变量
# print(student1.__dict__)


# print(id(student1))
# print(id(student2))
# print(id(student3))

# student.print_file()
