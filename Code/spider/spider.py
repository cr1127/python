import re
import ssl
from urllib import request
ssl._create_default_https_context = ssl._create_unverified_context

class Spider():

	# 腾讯游戏官方直播平台 企鹅电竞 lol
	url = 'https://egame.qq.com/livelist?layoutid=lol'
	root_pattren = '<div class="info-anchor">([\s\S]*?)</div>'
	name_pattren = '<p class="name">([\s\S]*?)</p>'
	number_pattren = '<span class="popular">([\s\S]*?)</span>'
	
	def __fetch_content(self):
		r = request.urlopen(Spider.url)
		htmls = r.read()
		htmls = str(htmls, encoding='utf-8')
		return htmls

	def __analysis(self, htmls):
		root_html = re.findall(Spider.root_pattren, htmls)

		# 提取名字和观看人数
		anchors = []
		for html in root_html:
			name = re.findall(Spider.name_pattren, html)
			number = re.findall(Spider.number_pattren, html)
			number = str(number)
			number1 = re.findall('>([\s\S]*)\\\\', number)
			anchor = {'name':name, 'number':number1}
			anchors.append(anchor)

		return anchors

	def __refine(self, anchors):

		# strip函数该方法只能删除开头或是结尾的字符，不能删除中间部分的字符。
		l = lambda anchor: {
			'name':anchor['name'][0],
			'number':anchor['number'][0].strip()
			}
		return map(l, anchors)

	def __sort(self, anchors):

		# 排序
		anchors = sorted(anchors, key=self.__sort_seed, reverse=True)
		return anchors


	def __sort_seed(self, anchor):
		r = re.findall('\d*',anchor['number'])
		number = float(r[0])
		if '万' in anchor['number']:
			number *= 10000
		return number


	def __show(self, anchors):
		for rank in range(0, len(anchors)):
			print('rank' + str(rank+1) 
			+ ' : ' + anchors[rank]['name'] + 
			'-----' + anchors[rank]['number'] + '人')


	def go(self):
		htmls = self.__fetch_content()
		anchors = self.__analysis(htmls)
		anchors = list(self.__refine(anchors))
		anchors = self.__sort(anchors)
		self.__show(anchors)



spider = Spider()
spider.go()
