for a in 0..199
	input = []
	result = []
	for n in 0..30
		i = gets.chomp.split(" ").map { |i| i.to_i }
		input.push(i)
	end

	for k in 0..49
		for j in 0..29
			result.push(input[j][k])
		end
		print result.group_by{|e| e}.max_by{|_,v| v.size}.first , " "
	end
print "\n"
end