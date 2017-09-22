n = gets.to_s.to_i64
puts (1_i64..n).reduce{ |n,m| (n*m)%1000000007_i64}