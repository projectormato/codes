s = gets.chomp.split("")
c = a = t = 0
for i in 0..s.size-1
	if s[i] == 'c'
		c += 1
	elsif s[i] == 'a'
		a += 1
	else
		t += 1
	end	
end
result[c, a, t]
puts result.sort[0]
