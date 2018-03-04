height = {}
n = gets.to_i
input = gets.chomp.split(" ").map { |input| input.to_i }
for i in 0..n-1
	height[i] = input[i]
end

result = height.sort_by {|k, v| v }.reverse

for i in 0..result.length-1
	puts result[i][0] + 1
end