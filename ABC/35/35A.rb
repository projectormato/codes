n = gets.chomp.split(" ").map { |n| n.to_i }

if n[0]*9 == n[1]*16
	puts '16:9'
else
	puts '4:3'
end