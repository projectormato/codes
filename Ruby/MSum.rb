gomi = gets.to_i
num = gets.chomp.split(" ").map{|num|num.to_i}
result = 0
mini = 0
for i in 0..gomi-1
	result += num[j]
	for j in (i+1)..gomi-1
		if num[j-1] < num[j]
			mini = num[j-1]
		else
			mini = num[j]
		end
	end
	result += mini
end
puts result