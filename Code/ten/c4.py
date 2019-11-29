#字符集
import re
s = 'abc, acc, adc, aec, afc, ahc'

r = re.findall('a[cf]c', s)
d = re.findall('a[^cf]c', s)
e = re.findall('a[c-f]c', s)
print(r)
print(d)
print(e)