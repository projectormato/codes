n, m = gets.chomp.split(" ").map(&:to_i)
ns = (n-m)*100
ms = m*1900
puts (ns+ms)*(2**m)