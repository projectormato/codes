result = 0
for i in 0..4
	if gets.chomp == 'yes'
		result += 1
	end
end
if result >= 3
	puts 'yes'
else
	puts 'no'
end