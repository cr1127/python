Life is Simple, I Use Python //人生苦短，我用Python
交换两个变量  x, y = y, x
Simple is better than complex. //简洁胜于复杂
Now is better than never. Although never is often better than right now.
做也许好过不做，但不假思索就动手还不如不做
1、编译性语言
（1）只须编译一次就可以把源代码编译成机器语言，后面的执行无须重新编译，直接使用之前的编译结果就可以；因此其执行的效率比较高；
（2）编译性语言代表：C、C++、Pascal/Object Pascal（Delphi）；
（3）程序执行效率比较高，但比较依赖编译器，因此跨平台性差一些；
不同平台对编译器影响较大。 
如：

（1）16位系统下int是2个字节（16位），而32位系统下int占4个字节（32位）；
（2）32位系统下long类型占4字节，而64位系统下long类型占8个字节；
2、解释性语言
（1）源代码不能直接翻译成机器语言，而是先翻译成中间代码，再由解释器对中间代码进行解释运行；
源代码—>中间代码—>机器语言

（2）程序不需要编译，程序在运行时才翻译成机器语言，每执行一次都要翻译一次；
（3）解释性语言代表：Python、JavaScript、Shell、Ruby、MATLAB等；
（4）运行效率一般相对比较低，依赖解释器，跨平台性好；
3、比较
（1）一般，编译性语言的运行效率比解释性语言更高；但是不能一概而论，部分解释性语言的解释器通过在运行时动态优化代码，甚至能使解释性语言的性能超过编译性语言；
（2）编译性语言的跨平台特性比解释性语言差一些；

代码是现实世界事物在计算机世界中的映射
写代码是将现实世界中的事物用计算机语言来描述

python中变量不直接储存值，而是储存值的内存地址或者引用。

#第三章Python的基本数据类型:
Number : 数字
整数 int
浮点数 float 
复数 complex
其他语言:单精度(float) 双精度(double)
其他语言:short long 
type(2/2) /结果为float
type(2//2) //结果为int
// c = 3 + 4j
// print(c + c)			复数相加
// print(c.real)		复数实部
// print(c.imag)		复数虚部
// print(3 + 4j.imag)   3+(4j).imag

测试两个实数是否足够接近用 math.isclose(0.4 - 0.3, 0.1)

各进制的表示和转化
二进制 0b+0或1
八进制 0o
16进制 0x
bin() //转化为二进制
int() //转化为十进制
hex() //转化为16进制
oct() //转化为八进制

bool 布尔类型 
complex 复数 如36j
Ture False //首字母大写
bool(None) //false

str 字符串
表示字符串 单引号 双引号 三引号 成对出现
如 "let's go"
如 ''' //"""
	hello world
	hello world
	hello world
	'''//"""
print('hello world\nhello world' ) //\n换行

// text = '''hello world !!!! '''
// len(text)			字符串的长度
// text.count('!')		字符串中!出现的次数
// 'hello' int text    字符串是否有hello
// '=' *20             字符串重复
// 'good' + 'morning'  字符串连接

转义字符
\n 换行
\r 回车
\' 单引号'
\t 横向制表符
print('hello \\n world')
hello \n world
字符串前面加个r 就不是一个普通字符串,而是一个原始字符串

字符串的运算
>>> "hello" + "hello"
'hellohello'
>>> "hello"*3
'hellohellohello'
>>> 'hello world'[0]
'h'
>>> 'hello world'[-1]
'd'
>>> 'hello world'[-3]
'r'
>>> "hello world"[0:4]
'hell'
>>> "hello world"[0:5]
'hello'
>>> 'hello world'[:-1]
'hello worl'


#第四章组的概念和定义
//list 列表
[1,2,3]
[[1], [a], [True]] 

列表中元素的类型可以不相同，它支持数字，字符串甚至可以包含列表
列表是写在方括号[]之间，用逗号分隔开的元素列表
列表索引值以0为开始值，-1为从末尾的开始位置
列表可以用+操作符进行拼接，使用*表示重复

//元组 tuple
(1,2,3)
(1,'-1',True)
>>> type((1,))
<class 'tuple'>
>>> type((1))
<class 'int'>
>>> type(())
<class 'tuple'>

tuple与list类似，不同之处在于tuple的元素不能修改。
tuple写在小括号里，用逗号隔开。
元组的元素不可变，但可以包含可变的对象 list。

str list tuple 序列
>>> 'hello world'[2]
'l'
>>> [1,2,3][2]
3
>>> [1,2,3,4,5][1:3]
[2, 3]
>>> "hello world"[0:8:2]
'hlow'
>>> 3 in [1,2,3,4,5,6]
True
>>> 3 not in [1,2,3,4,5,6]
False

len() #判断长度
max() #最大值
min() #最小值
ord() #求ascll码
>>> ord('r')
114
>>> ord('d')
100

#集合 set  {} 
特点：无序 不重复
#差集
>>> {1,2,3,4,5,6}-{3,4}
{1, 2, 5, 6}
#交集
>>> {1,2,3,4,5,6}&{3,4}
{3, 4}
#合集
>>> {1,2,3,4,5,6}|{3,4,7}
{1, 2, 3, 4, 5, 6, 7}
#如何定义空的集合

>>> type(set())
<class 'set'>

set和dict类似，也是一组key的集合，但不存储value值。由于key不能重复所以，在set中，没有重复的key.
set是无序的，重复元素在set中自动被过滤。

#dict 字典  无相同键值
{key1:value1, key2:value2}
#通过key键访问到value
>>> {'Q':'新月打击','w':'苍白之瀑','E':'月之降临','R':'月神冲刺'}
{'Q': '新月打击', 'w': '苍白之瀑', 'E': '月之降临', 'R': '月神冲刺'}
>>> {'Q':'新月打击','w':'苍白之瀑','E':'月之降临','R':'月神冲刺'}['R']
'月神冲刺'
dict 是无序的对象组合，使用键-值，具有极快的查找速度。
key值必须是不可变类型 如 int, 'str' 不可以是list类型
>>> type({})
<class 'dict'>

#第五章变量与运算符
定义一个变量
A = [1,2,3,4]
>>> a = 1
>>> b = a
>>> a = 3
>>> print(a)
3
>>> print(b)
1
>>> a = [1,2,3,4,5]
>>> b = a
>>> print(a)
[1, 2, 3, 4, 5]
>>> a[0] = '1'
>>> print(a)
['1', 2, 3, 4, 5]
>>> print(b)
['1', 2, 3, 4, 5]

#int str tuple(不可改变 )值类型 set dict list (可变) 引用类型
id() #返回变量在内存的地址

#列表的可变与元组的不可变
>>> a = [1,2,3]
>>> id(a)
58432648
>>> hex(id(a))
'0x37b9c88'
>>> a[0] = '1'
>>> print(a)
['1', 2, 3]
>>> a = (1,2,3)
>>> a[0] = '1'
Traceback (most recent call last):
  File "<pyshell#27>, line 1, in <module>
    a[0] = '1'
TypeError: 'tuple' object does not support item assignment
>>> b = [1,2,3]
>>> b.append(4)
>>> print(b)
[1, 2, 3, 4]
>>> c = (1,2,3)
>>> c.append(4)
Traceback (most recent call last):
  File "<pyshell#32>, line 1, in <module>
    c.append(4)
AttributeError: 'tuple' object has no attribute 'append'
>>> a = (1,2,[3,4,5])
>>> a[2]
[3, 4, 5]
>>> a[2][1]
4
>>> a[2][1] = '4'
>>> print(a)
(1, 2, [3, '4', 5])

#运算符

#算数运算符
3/2 #求的是小数
3//2 #求的是整数  向下取接近除数的整数
5%2  #余数
2**5 //2的多少方

#赋值运算符
=
+=
*=
/=
%=
**=
//=

#比较运算符
==
!=
>
<
>=
<=
>>> [1,2,3] < [2,3,4]
True
>>> (1,2,3) < (1,3,2)
True

#逻辑运算符 bool类型
and
or 
not 
>>> not True
False
>>> not False
True
int float 0被认为是False, 非0表示True
str  空字符串 False, True
list [] 表示False 

#成员运算符
in 
not in
dict中 用键值key

#身份运算符
is
is not
#值是否相等 is 不是比较值相等。 is 比较的是两个变量的身份(id)是否相等
>>> a = 1
>>> b = 1.0
>>> a is b
False
>>> id(a)
1445775280
>>> id(b)
52807232

>>> a = {1,2,3} #无序
>>> b = {2,1,3}
>>> c = (1,2,3) #序列
>>> d = (2,1,3)
>>> a == b
True
>>> c == d
False
>>> a is b
False
>>> c is d
False
>>> id(a)
58105608
>>> id(b)
58105272

#判断变量的类型
isinstance(a,int)
>>> a = 1
>>> isinstance(a,int)
True
>>> isinstance(a,str)
False
>>> isinstance(a,(int,str,float))
True
>>> isinstance(a,(str,float))
False
对象的三个特征 id value type（is，==，isinstance）
type的判断 type()不能判断对象的子类是否是啥类型 ，isinstance()可以
#位运算符（把数字按成二进制进行运算）
&
|
^ #按位异或
~
<<
>>

#第六章分支 循环 条件与枚举
>>> a = 1
>>> b = 2
>>> c = 3
>>> a or b and c
1
>>> a or b
1
>>> 1 and 3
3
逻辑运算符 not > and > or
#条件控制
if else  for while

mood = True
if mood:
	print('go to left')
else:
	print('go to right')

#输入函数input()
user_accout = input() 

if mood:
	pass
elif mood:
	pass
elif mood:
	pass
else:
	pass


#第八章 python函数
#设置小数的位数
round()
>>> a = 1.12386
>>> round(a, 3)
1.124

#序列解包
// a = 1
// b = 2 
// c = 3

a,b,c = 1,2,3

d = 1,2,3

a,b,c = d

#第九章 面向对象 
# 类 对象
局部变量不覆盖全局变量
类变量与类相关
实例变量与对象相关
查找类变量和实例变量的顺序
// 对象所有的变量
student1.__dict__

// Python 类
1.变量：类变量 实例变量
2.方法：实例方法(对象中的变量) 类方法(主要是类中变量) 静态方法
类方法和静态方法不能调用实例变量
3.构造函数
4.成员的可见性
5.面向对象3大特性 
  (1) 继承性
  (2) 封装性
  (3) 多态性
方法和类的变量名前面的加__ ,变为私有的
python中子类可以有多个父类

#第十章 正则表达式与JSON
什么是JSON
javaScript Object Notation
JavaScript 对象标记
是一种轻量级的{数据交换格式}
字符串是JSON的表现形式
符合JSON格式的字符串叫JOSN字符串
# {"name" : "qiyue"} 符合JSON格式
# {a:"qiyue"   不符合JSON格式
优势：
易于阅读
易于解析
网络传输效率高 
{跨语言交换数据}

JSON对象 JSON  JOSN字符串

ECMASCRIPT(标准的实现)  JavaScript ActionScript JSON
global 全局变量关键字

# \d \D 数字字符
# \w 单词字符 \W 非单词字符
# \s 空白字符 \S
# . 匹配除换行符\n之外其他所有字符
# 贪婪 与 非贪婪? c6.py

# 数量词
# * 匹配0次或者无限多次
# + 匹配1次或者无限多次
# ? 匹配0次或者1次

#边界匹配
# $ 表示末位

#re.I 是忽略大小写 使用re.S参数以后，正则表达式会将这个字符串作为一个整体，在整体中进行匹配。
r = re.findall('c#.{1}', lanuage, re.I | re.S) 

# re.sub 正则替换 c11.py

# root_pattren = '<div class="info-anchor">([\s\S]*?)</div>'
# ()表示只取中间的内容


# 第13章 实战：原生爬虫
1. BeautifulSoup, Scrapy
2. 爬虫 反爬虫 反反爬虫
3. ip 封
4. 代理ip库