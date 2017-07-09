n, m = gets.chomp.split(" ").map(&:to_i)
human,check,result = [], [], []
flag = 10**9
n.times do
	human.push(gets.chomp.split(" ").map(&:to_i))
end

m.times do
	check.push(gets.chomp.split(" ").map(&:to_i))
end

for i in 0..n-1
	for j in 0..m-1
		kyori = (human[i][0] - check[j][0]).abs + (human[i][1] - check[j][1]).abs
		if flag > kyori
			flag = kyori
			result[i] = j+1
		end
	end
	flag = 10**9
end


puts result.join("\n")