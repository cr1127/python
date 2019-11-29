#
import re
lanuage = 'PythonC#\nJavaPHP'
#re.I 是忽略大小写 使用re.S参数以后，正则表达式会将这个字符串作为一个整体，在整体中进行匹配。
r = re.findall('c#.{1}', lanuage, re.I | re.S) 
print(r)