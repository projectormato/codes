one_yen , setOrange_yen , wontOrange , setOrange = map(int,input().split())
haveOrange = 0
totalMoney = 0
while wontOrange >= haveOrange:
	if wontOrange >= setOrange or one_yen * setOrange >= setOrange_yen:
		wontOrange -= setOrange
		totalMoney += setOrange_yen
		print(totalMoney)
	else:
		wontOrange -= 1
		totalMoney += one_yen
print(totalMoney)
# 