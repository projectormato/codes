n = gets.chomp.split(" ").map { |n| n.to_i }
input = []
for i in 0..n[2]-1
	input[i] = gets.chomp.split(" ").map { |n| n.to_i }
end
for i in 0..n[2]-1
	case input[i][2]
		when 1 then
			if n[0] >= input[i][0] 
				n[0] = n[0] - input[i][0]
			else n[0] = 0
			end
		when 2 then
			if n[0] <= input[i][1]
				n[0] = input[i][1]
			else n[0] = 0
			end
		when 3 then
			if n[1] >= input[i][1]
				n[1] = n[1] - input[i][1]
			else n[1] = 0 
			end 
		when 4 then
			if n[1] <= input[i][1]
				n[1] = input[i][1]
			else n[1] = 0
			end
		end	
end
p n[0] * n[1]
p n