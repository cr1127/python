#主要是用来遍历/循环 序列或者集合 字典 end='' 输出在一行
# a = [['apple','orange','banana','grape'],(1,2,3)]

# for x in a:
# 	for y in x:
# 		print(y,end='')    
# else:
# 	print('fruit is gone')

# 使用break
# a = [1,2,3]

# for x in a:
# 	if x == 2:
# 		break
# 	print(x)
# else:
# 	print('EOF')


#使用continue
# a = [1,2,3]

# for x in a:
# 	if x == 2:
# 		continue
# 	print(x)

#break跳出的是内部的循环 else配对的是外面的for
a = [['apple','orange','banana','grape'],(1,2,3)]
for x in a:
	for y in x:
		if y=='orange':
			break
		print(y)
else:
	print('fruit is gone')


