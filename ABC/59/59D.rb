x, y = gets.chomp.split(" ").map { |n| n.to_i }

if x == y and x == 0
	puts 'Brown'
else
	 xi = x == 0 ? 0 : Math.log2(x).to_i

	if x == 1
		 xd = 1
	elsif xi == 0
		 xd = 0
	else
		 xd = x == 1 ? 1 : x - 2**xi
	end

	 yi = y == 0 ? 0 : Math.log2(y).to_i

	if y == 1
		 yd = 1
	elsif yi == 0
		 yd = 0
	else
		 yd = y == 1 ? 1 : y - 2**yi
	end

	if (xi + xd + yi + yd) % 2 == 1
		puts 'Alice'
	else
		puts 'Brown'
	end
end

