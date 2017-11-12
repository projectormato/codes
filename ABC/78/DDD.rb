n, x, y = gets.chomp.split(" ").map(&:to_i)
a = gets.chomp.split(" ").map(&:to_i)
i = 0
isXturn = true

while true
	if isXturn
		amax = a[i..n-1].max
		amin = a[i..n-1].min
		p "x"
		if (amax-y).abs > (amin-y).abs
			x = amax
			i = a.rindex(amax)
		else
			x = amin
			i = a.rindex(amin)
		end
	else
		p "y"
		start = i
		if start >= n-1			
			y = a[j]
			break
		end
		for j in start..n-1
			if (x-a[j]).abs < (x-y).abs
				y = a[j]
				i = j
				break
			end
		end
	end
	isXturn = !isXturn
	if i >= n-1
		break
	end
end

puts (x-y).abs