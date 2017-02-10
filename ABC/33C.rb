result = 0
n = gets.chomp.split("+")
for i in 0..n.length-1
	nn = n[i].split("*").map { |n| n.to_i }
	if nn.inject(:*) != 0
		result += 1
	end
end
puts result