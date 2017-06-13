x = 1;
y = 2;
result = 2;
while true
	if x > (4* 10 **6) or y > (4* 10 **6)
		break
	end

	if y > x
		x = x + y
		if x % 2 == 0
			result += x
		end
	else
		y = x + y
		if y % 2 == 0
			result += y
		end
	end

end
puts result