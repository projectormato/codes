put = []
for i in range(4):
	put.append(int(input()))

if put[0] < put[1]:
	print(put[2] * put[0])
else:
	print(put[2] * put[1] + put[3] * (put[0] - put[1]))

