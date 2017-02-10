data = {}
n = gets.to_i
num = []
for i in 0..n-1
	input = gets.chomp.split(" ")
	data[input[0]] = input[1].to_i
	num.push(input[1].to_i)
end

if num.max > num.inject(:+)/2
	puts data.key(num.max)
else
	puts 'atcoder'
end