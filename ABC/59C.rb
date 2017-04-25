n = gets.to_i
input = gets.chomp.split(" ").map { |n| n.to_i }
if input[0] == 0
	input[0] = 1
end
total = input[0]
cost = 0
flag = input[0] > 0 ? true : false
for i in 1..n-1
	total += input[i]
	if flag == true
		if total > 0
			#p total
			cost += (total.abs) +1
			total = -1
		elsif total == 0
			cost += 1
			total = -1
		end
		flag = false
	else
		if total < 0
			#p total
			cost += (total.abs) +1
			total = 1
		elsif total == 0
			cost += 1
			total = 1
		end
		flag = true
	end
end

puts cost

