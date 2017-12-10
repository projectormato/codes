n = gets.to_i
a = gets.chomp.split(" ").map(&:to_i)
result = 0
while true
	if a.all? { |a| a%2==0 }
		a = a.map { |a| a/2 }
		result += 1
	else
		break
	end
end
puts result