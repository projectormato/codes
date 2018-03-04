s = gets.chomp.split("")
now = s[0]
result = 0
for i in 1..s.length
	if now != s[i]
		result += 1
		now = s[i]
	end
end
puts result-1