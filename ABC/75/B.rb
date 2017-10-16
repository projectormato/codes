h, w = gets.chomp.split(" ").map(&:to_i)
input = (1..h).map{gets.chomp.split("")}
for i in 0..h-1
	input[i].push()
end
for i in 0..h-1
	for j in 0..w-1
		sum = 0
		if input[i][j] == '.'
			if input[i][j-1..j+1] == []				
				unless i == 0
					p input[i-1][j..j+1]
					sum += input[i-1][j..j+1].count('#')				
				end
				p input[i][j..j+1]
				sum += input[i][j..j+1].count('#')
				unless i == h-1
					sum += input[i+1][j..j+1].count('#')				
					p input[i+1][j..j+1]
				end
			else
				unless i == 0
					p input[i-1][j-1..j+1]
					sum += input[i-1][j-1..j+1].count('#')				
				end
				p input[i][j-1..j+1]
				sum += input[i][j-1..j+1].count('#')
				unless i == h-1
					sum += input[i+1][j-1..j+1].count('#')				
					p input[i+1][j-1..j+1]
				end
			end
			input[i][j] = sum
		end
	end
end
for i in 0..h-1
	puts input[i].join("")
end
