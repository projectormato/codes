s = gets.chomp
result = 0
while s.sub!('cat', '')
	result +=1
end
puts result