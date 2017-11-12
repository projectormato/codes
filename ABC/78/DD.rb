n, x, y = gets.chomp.split(" ").map(&:to_i)
a = gets.chomp.split(" ").map(&:to_i)
isXturn = true

for i in 0..n-1
	if isXturn
		if i == n-1
			x = a[i]
		end
		if (x-y).abs < (a[i]-y).abs
			x = a[i]
		else
			next
		end
	else
		if i == n-1
			y = a[i]
		end
		if (x-y).abs > (x-a[i]).abs
			y = a[i]
		else
			next
		end
	end
	isXturn = !isXturn
end
# p x, y
puts (x-y).abs