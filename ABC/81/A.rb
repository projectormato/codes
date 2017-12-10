s = gets.chomp.split("")
result = 0
s.size.times { |n|
	if s[n] == '1'
		result += 1
	end
}

puts result