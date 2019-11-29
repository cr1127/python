
# 模板
# 类名的首字母大写
class Student():
	#定义若干变量
	#类变量
	#一个班级里所有学生的总数
	sum = 0
	# name = 'queue'
	# age = 0
	#'类变量' "实例变量"
	#实例方法 与对象相关联
	def __init__(self, name, age):
		#this
		#显胜于隐
		#实例变量
		self.name = name
		self.age = age
		self.__score = 0

	def marking(self, score):
		if score < 0:
			return '不能够给别人打负分'
		self.__score = score
		print(self.name + "同学的本次考试的分数：" + str(self.__score))
		# print(self.name)
		# print('student')
		# return 'student'
		# TypeError: __init__() should return None, not 'str'
	#定义函数
	#行为 与 特征
	def do_homework(self):
		self.do_english_homework()
		print("hmework")

	def do_english_homework(self):
		print()

	#类方法	
	@classmethod	
	def plus_sum(cls):
		cls.sum += 1
		print(cls.sum)
		# print(self.name)
		# 
	#静态方法
	@staticmethod
	def add(x,y):
		print(Student.sum)
		print("This is a static method")
		# print(self.name)

class Printer():
	def print_file(self):
		print('name:' + self.name)
		print('age:' + str(self.age))




student1 = Student('石敢当', 18)
student2 = Student('小诺', 18)
result = student1.marking(59)
student1.__score = -1
print(student1.__dict__)

print(student2.__dict__)
# student1.add(1,2)
# Student.add(1,2)
# student1.plus_sum() 不建议用 对象调用类方法
# Student.plus_sum()
# student2 = Student('喜小乐', 19)
# Student.plus_sum()
# print(student1.name)
# print(student2.name)

