result = 0
n = gets.to_i-1
input = gets.chomp.split(" ").map { |n| n.to_i }
input.sort!.reverse!
for i in 0..n
	result += input[1+i*2]
end

puts result