# re.sub 正则替换
import re

def convert(value):
	matched = value.group()
	return '!!' + matched + '!!'


lanuage = 'PythonC#JavaC#PHPC#'
#查找成功后替换 2表示替换的次数
r = re.sub('C#', convert, lanuage)
# lanuage = lanuage.replace('C#', 'GO')
# print(lanuage)
print(r)

