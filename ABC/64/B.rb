n = gets.to_i
home = gets.chomp.split(" ").map(&:to_i)
puts home.max - home.min