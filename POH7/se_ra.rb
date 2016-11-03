result = ''
for i in 1..gets.to_i
	result += gets.chomp + '_'
end
puts result.chop