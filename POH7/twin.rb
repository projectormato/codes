a,b = gets.chomp.split(" ").map { |a| a.to_i } ,gets.chomp.split(" ").map { |b| b.to_i }
puts (a[0]/a[1].to_f > b[0]/b[1].to_f)? 1:2