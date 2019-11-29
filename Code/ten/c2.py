
import re
a = 'C0C++7Java8C#9Python10JavaScript'

r = re.findall('Python', a)
if len(r) > 0:
	print('字符串中包含PHP')
else:
	print('No')
print(r)

# print(a.index('Python')>-1)

# print('Python' in a)