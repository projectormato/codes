n = gets.chomp.split(" ").map { |n| n.to_i }
map = ""
for i in 1..n[0]
	map += gets.chomp
end

if map.count('#') == n.inject(:+)-1
	puts 'Possible'
else
	puts 'Impossible'
end