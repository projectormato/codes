input = gets.chomp
target = ['A', 'B', 'C', 'D', 'E', 'F']
result = [0, 0, 0, 0, 0, 0]
for i in 0..input.length
	for j in 0..target.length-1
		if input[i] == target[j]
			result[j] += 1
		end
	end 
end
puts result.join(" ")