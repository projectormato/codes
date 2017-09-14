n = gets.to_i
result = 0
for i in 0..n-1
	l, r = gets.chomp.split(" ").map(&:to_i)
	result += (r - l) + 1
end
puts result