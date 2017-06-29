n = gets.to_i
x = []
nowmin , mins = 0
n.times do
	x.push(gets.chomp.split(" ").map(&:to_i))
	
end

p x
