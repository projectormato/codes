n, m = gets.chomp.split(" ").map(&:to_i)

if n == 1 and m == 1
  puts(1)
  exit
end
if n == 1
  puts(m-2)
  exit
end
if m == 1
  puts(n-2)
  exit
end
n = n-2
m = m-2
puts(n*m)
