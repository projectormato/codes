n  = gets.to_i
now = 0
result = 0
ans,put = 0,0
for i in 0..n/2
	now = n - i
	while true do
		if now % 2 == 0
			result += 1
			now /= 2
			# p "re =+ #{result}, now = + #{now}"
		else
			break
		end
	end
	if ans < result
		ans = result
		put = n-i
	end
	result = 0
end
puts put == 0 ? 1 : put