k = gets.to_i
n = 50
result = []
for i in 0..n-1
	result.push(i)
end

kasan = k/n
amari = k%n

result = result.map { |n| n+kasan }

for i in 1..amari
	result[-i] += 1
end

puts n
puts result.join(" ")

