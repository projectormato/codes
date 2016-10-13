a = gets.chomp.split(" ").map{|a| a.to_i}
b = gets.chomp.split(" ").map{|b| b.to_i}

if a[0] == b[0] or a[1] == b[0] or a[1] == b[0] or a[1] == b[1]
	puts 'YES'
else
	puts 'NO'
end