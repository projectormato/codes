input = gets.chomp.split(" ").map(&:to_i)

if input[1] < input[2]
	puts 0
else
	result = [input[1], input[3]].min -  [input[0], input[2]].max
	puts result > 0 ? result : 0
end

