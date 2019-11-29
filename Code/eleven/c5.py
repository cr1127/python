from enum import IntEnum, unique
# 必须是整数
@unique
class VIP(IntEnum):
	YELLOW = 1
	GREEN = 2
	BLACK = 3
	RED = 4

# 23种设计模式 单例模式