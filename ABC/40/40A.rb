n = gets.chomp.split(" ").map { |n| n.to_i }
puts n[0]*n[1]*2 + n[1]*n[2]*2 + n[2]*n[0]*2