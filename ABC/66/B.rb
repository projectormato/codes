s = gets.chomp
result = 0

s.length.times do |i|
	s.slice!(-1)
	half_i = (s.length/2.0).ceil
	half_s = s.scan(/.{1,#{half_i}}/)
	if half_s[0] == half_s[1]
		result = s.length
		break
	end
end
puts result
