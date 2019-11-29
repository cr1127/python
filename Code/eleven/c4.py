from enum import Enum
from enum import IntEnum  
# 必须是整数
class VIP(Enum):
	YELLOW = 1
	GREEN = 2
	BLACK = 3
	RED = 4

class VIP1(Enum):
	YELLOW = 1
	GREEN = 2
	BLACK = 3
	RED = 4

class Common():
	YELLOW = 1

result  = VIP.GREEN ==VIP.BLACK
# result  = VIP.GREEN > VIP.BLACK 报错
# result = VIP.GREEN is VIP.GREEN
# result = VIP.GREEN == VIP1.GREEN False

print(result)
# print(VIP.GREEN)
# VIP.YELLOW = 6