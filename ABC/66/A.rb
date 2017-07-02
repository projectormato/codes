input = gets.chomp.split(" ").map(&:to_i)
puts input.sort[0] + input.sort[1]
