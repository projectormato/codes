n = gets.to_i
s = gets.chomp.split("")
hidarihosii = 0
migihosii = 0

for i in 0..n-1
	case s[i]
	when ')' then
		if migihosii == 0
			hidarihosii += 1		
		else
			migihosii -= 1
		end
	when '(' then
		migihosii += 1
	end
end
for i in 0..migihosii-1
	s << ')'
end

for i in 0..hidarihosii-1
	s.insert(0, '(')
end

#p [hidarihosii, migihosii].join(" ")
puts s.join