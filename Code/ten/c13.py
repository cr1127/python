import re

s = 'A8C3721D86'
s1 = '8C3721D86'
#None
r = re.match('\d', s)
r1 = re.match('\d', s1)
r2 = re.search('\d', s)
r3 = re.findall('\d', s)
print(r)
print(r1)
print(r1.span())
print(r1.group())
print(r2)
print(r3)