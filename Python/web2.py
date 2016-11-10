# coging:utf-8
from bs4 import BeautifulSoup
import urllib.request

html = urllib.request.urlopen('http://www.yahoo.co.jp/')
soup = BeautifulSoup(html, 'html.parser')
#print(soup.get_text)
#print(soup.select('a'))
print(soup.select('#afhistorystate'))