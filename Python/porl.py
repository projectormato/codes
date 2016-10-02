result = []
for i in input():
	if i == 'B':
		if result:
			result.pop()
	else: result.append(i)
print(''.join(result))