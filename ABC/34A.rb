n = gets.chomp.split(" ").map { |n| n.to_i }
if n[0] < n[1]
	puts 'Better'
else
	puts 'Worse'
end