m1 , m2 , have = STDIN.gets.chomp.split(" ")
m1 = m1.to_i
m2 = m2.to_i
have = have.to_i
ans = 0
if m1 < m2
	while have >= 0
		have = have - m1
		ans += 1
	end
else
	while have >= 0
		have = have -m2
		ans += 1
	end
end
STDOUT.puts ans -1