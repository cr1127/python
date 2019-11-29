import re
a = 'C0C++7Java8C#9Python10JavaScript'

r = re.findall('\D', a)
print(r)

# 'Python' 普通字符 '\d' 元字符