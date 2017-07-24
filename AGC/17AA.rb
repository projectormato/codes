n, m = gets.chomp.split(" ").map(&:to_i)
inputs = gets.chomp.split(" ").map(&:to_i)
flag = false

if m%2 == 1 #奇数の時
	for i in 0..n-1
		if inputs[i] %2 != 0
			flag = true
		end
	end

	if flag
		result = 2**(n-1)
	else
		result = 0
	end

else
	for i in 0..n-1
		if inputs[i] %2 !=0
			flag = true
		end
	end

	if flag
		result = 2**(n-1)
	else
		result = 2 ** n
	end

end

puts result
