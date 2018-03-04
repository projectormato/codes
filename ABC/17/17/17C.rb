jewel = []
max = 0
n, m = gets.chomp.split(" ").map { |n| n.to_i }
for i in 0..m+1
	jewel[i] = 0
end

for i in 0..n-1
	le, ri, score = gets.chomp.split(" ").map { |n| n.to_i }
	jewel[le] += score
	jewel[ri+1] -= score
	max += score 
end
for i in 0..m
	jewel[i+1] += jewel[i]
end

result = max - jewel[1..-2].min
puts result