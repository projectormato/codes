nums = []
result = 1
n = gets.to_i
for i in 0 ..n-1
	nums[i] = gets.chomp.split(" ").map { |nums| nums.to_i }
end
nums = nums.sort.reverse
for i in 0 ..n-1
	if nums[i][0] > nums[i +1][0] and nums[i][1] > nums[i +1][1]
		result += 1
	else

	end
end
puts result
