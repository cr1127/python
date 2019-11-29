import re

data = 'npytho\java\go\c13241'
result = re.findall('n([\D]*)\W',data)
print(result)