num = []
for i in 1..3
	num[i] = STDIN.gets.to_i
end
while true do
	if num[3]%num[1] == 0 && num[3]%num[2] == 0
		STDOUT.puts num[3]
		break
	else
		num[3] += 1
	end
end