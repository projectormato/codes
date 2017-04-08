n = gets.to_i
p r5 = 5 ** (1/2.0)
p a = (1 + r5) /2
p b = (1 - r5) /2

puts 1 / r5 * ( a**n  - b**n)
