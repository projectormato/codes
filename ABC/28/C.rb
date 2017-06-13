input = gets.chomp.split(" ").map(&:to_i)
sum = []
for i in 0..9
	sum.push(input.combination(3).to_a[i].inject(:+))
end
puts sum.uniq.sort[-3]