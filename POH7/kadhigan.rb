n = gets.to_i
result = 1
for i in 0..n-1
	result *=n
	n -=1
end
puts result