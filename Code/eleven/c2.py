from enum import Enum

class VIP(Enum):
	YELLOW = 1
	YELLOW_ALIAS = 1
	GREEN = 2
	BLACK = 3
	RED = 4
a = 1 
print(VIP(a))
# 别名
# print(VIP.YELLOW.value)
# print(type(VIP.YELLOW.name))
# print(type(VIP.YELLOW))
# print(VIP['YELLOW'])
# 枚举类型 枚举的名字 枚举的值
# VIP.YELLOW = 6

# for v in VIP:
# 	print(v)

# for v in VIP.__members__.items():
# 	print(v)