n = gets.chomp.split(" ").map { |n| n.to_i-1 }
nn = n[0] + n[1]
ue = (1..nn).inject(:*) % 1000000007
sita1 = (1..n[0]).inject(:*) % 1000000007
sita2 = (1..n[1]).inject(:*) % 1000000007
totyuu = ue / (sita1 * sita2)
puts  totyuu % 1000000007
