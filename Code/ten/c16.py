import json
# 序列化
student = [
			{'name': 'qiyue', 'age': 18, 'flag': False},
			{'name': 'qiyue', 'age': 18}
		  ]

#  NOSQL MongDB
json_str = json.dumps(student)
print(json_str)