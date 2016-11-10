# coging:utf-8
from bs4 import BeautifulSoup
import urllib.request

html ='''
<div>
<a href = "/link">spam</a>
</div>
'''
soup = BeautifulSoup(html, 'html.parser')

soup.div.a.unwrap()

print(soup.div)