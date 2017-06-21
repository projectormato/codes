input = gets.chomp.split("")
p nagasa = input.count
p onazi = input.count(input.max_by { |v| input.count(v) })
result = 0

for i in 0..input.length
	if  nagasa <= onazi
		result = i
		break
	end
	nagasa -= (1 + onazi)
end
puts result
