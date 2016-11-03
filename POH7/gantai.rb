max = gets
have_max = gets
have = gets.chomp.split(" ").map { |have| have.to_i }
sell_max = gets.to_i
sell = gets.chomp.split(" ").map { |have| have.to_i }
result = []
for i in 0..sell_max-1
	if have.include?(sell[i])
	
	else
		result.push(sell[i])
	end
end
if result == []
	puts "None"
else
	puts result.sort.join(' ')
end