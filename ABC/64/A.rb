r, g, b = gets.chomp.split(" ")
sum = r + g + b
result = sum.to_i
if result % 4 == 0
	puts 'YES'
else
	puts 'NO'
end
