n, q = gets.split(" ").map(&:to_i)
a = Array.new(n, 0)
q.times do 
  input = gets.split(" ").map(&:to_i)
  a.fill(input[2], input[0]-1..input[1]-1)
end

puts a.join("\n")