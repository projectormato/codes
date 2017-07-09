a, b = gets.chomp.split(" ").map(&:to_i)
result = a+b >= 24? (a+b)%24 : a+b
puts result