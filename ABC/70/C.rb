n = gets.to_i
inputs = []
result = 1
for i in 0..n-1
	result = result.lcm(gets.to_i) 
end

puts result
