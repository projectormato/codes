num = gets.to_i
nums = gets.chomp.split(" ").map{|num|num.to_i}
result = 0
for i in 1..num
	if i == num
	else
		nums[i-1] > nums[i]
		result += nums[i-1] - nums[i]
	end
	result += i*(num +(-i+1))
end
puts result