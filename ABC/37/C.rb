n, k = gets.chomp.split(" ").map(&:to_i)
a = gets.split(" ").map(&:to_i)
bubun = n - k + 1
result = 0

1.upto(n-1) do |i|
  a[i] += a[i-1]
end
a.insert(0,0)

bubun.times do |i|
  result += a[i + k] - a[i]
end

puts result