n = gets.to_i
p (1..n).inject(:*).to_s.reverse.to_s[0, 3].reverse
#.to_i