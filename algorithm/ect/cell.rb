def Growth(n)
	if n == 0
		return 10
	else
		return 2 * Growth(n-1) -4
	end
end
puts Growth(gets.to_i)