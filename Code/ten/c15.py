import json
# 反序列化  json数据格式 转换成 python类型
# 序列化    python类型 转换成 json数据格式
#JSON object(dict) array(list)
json_str = '[{"name":"qiyue", "age":18},{"name":"qiyue", "age":18}]'
#object 通过json.loads转换成dict类型 不同语言转换成不同类型
student = json.loads(json_str)
print(type(student))
print(student)
print(student[0]['name'])

# json      python
# object    dict
# array     list
# string    str
# number    int
# number    float
# true      True
# false     False
# null      None