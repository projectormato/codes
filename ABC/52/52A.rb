input = gets.chomp.split(" ").map { |input| input.to_i }
puts [input[0] * input[1], input[2] * input[3]].max