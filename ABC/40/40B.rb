n = gets.chomp.split(" ").map { |n| n.to_i }
a = n[0] % 12 * 30 + n[1] * 0.5
b = n[1] * 6
if (a-b).abs > 180
	puts 360-(a-b).abs
	else
	puts (b-a).abs	
end
