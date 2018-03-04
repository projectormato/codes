input = gets.chomp.split(" ").map { |input| input.to_i }
puts input.inject(:*) % (10**9+7)
