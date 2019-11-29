import re

s = 'life is short,i use python, i love python'
#None
r = re.search('life(.*)python(.*)python', s)
print(r.group(0,1,2))
print(r.groups())