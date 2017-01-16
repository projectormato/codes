n = gets.to_i
input = gets.chomp.split("")
result = [0]
flag = 0

for i in 0..n
	if input[i] == 'I'
		flag += 1
	else
		flag -=1
	end
	result.push(flag)
end
puts result.max