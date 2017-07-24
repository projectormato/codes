n, m = gets.chomp.split(" ").map(&:to_i)
inputs = gets.chomp.split(" ").map(&:to_i)
result = m == 0? 1:0
for i in 1..n
	array = inputs.combination(i).to_a.map{|n|n.inject(:+)}.select do |j|
		p j
		j %2 == m
	end
	result += array.length
end

puts result

