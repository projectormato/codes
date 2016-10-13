num = gets.to_i
nums = gets.chomp.split(" ").map {|nums|nums.to_i}
result = 0
count = 0
result += num
for i in 0..num-2
	if nums[i] < nums[i + 1]
		result += 1 + count
		count += 1
	else
		count = 0
	end
end
puts result