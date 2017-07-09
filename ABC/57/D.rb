n, a, b = gets.chomp.split(" ").map(&:to_i)
inputs = gets.chomp.split(" ").map(&:to_i)
result,pettarn = 0 ,0
inputs = inputs.sort.reverse

for i in a..b
	ave = inputs[0..i-1].inject(:+)/i.to_i
	if result <= ave 
		result = ave
	end
end

puts result
puts pettarn

