x = 13195 #600851475143
flag = true
result = []
while flag
	for i in 2..x
		if x % i == 0
			x = x / i
			result.push(i)
			flag = true
			break
		else
			flag = false
		end
	end

end
p result
x = 13195 #600851475143
p x / result.max