class LRU:
	def __init__(self, aray):
		self.aray = aray
		self.maptmp = {}
		for a in aray:
			self.maptmp[a] = 0
		
		self.count = 0
		self.MAX = 10

	def acceess(self, target):
		self.count += 1
		if target in self.maptmp:
			self.maptmp[target] += 1

		if self.count == self.MAX:
			self.delete()
			self.count = 0

		return target in self.maptmp

	def delete(self):
		if not self.maptmp:
			return None
		minv = max(self.maptmp.values())
		for k,v in self.maptmp.items():
			if v <= minv:
				minv = v
				mink = k
		del self.maptmp[mink]
		self.aray.remove(mink)


	def __str__(self):
		return str(self.aray)


lru = LRU([4, 2, 3, 1])
print(lru.acceess(4))
print(lru.acceess(3))
print(lru.acceess(4))
print(lru.acceess(4))
print(lru.acceess(2))
print(lru.acceess(4))
print(lru.acceess(3))
print(lru.acceess(2))
print(lru.acceess(1))
print(lru.acceess(2))
print(lru)

