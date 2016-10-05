gomi = gets.to_i
num = gets.chomp.split(" ").map{|num|num.to_i}
result = 0
for i in 0..gomi-1
	for j in (i+1)..gomi
	result += num[i..j].min
	p result
	end
end
puts result