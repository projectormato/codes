num = gets.to_i
gomi = gets
result = 0
for i in 1..num
	result += i*(num -i+1)
end
puts result