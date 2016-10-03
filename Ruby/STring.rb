str = STDIN.gets.chomp.split("")
t = s = 0
for i in 0..str.length
	if str[i] == "T"
		if s != 0
			s -= 1
		else
			t += 1
		end
	else
		s += 1
	end
end
STDOUT.puts t + s -1