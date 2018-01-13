s = gets.chomp
ni, ko = 0, 0
if s[0] != '2' or s[-1] != '5'
	puts -1
	exit
end
for i in 0..s.size-1
	if s[i] == '2' 
		ni += 1
	elsif s[i] == '5'
		ko += 1
	else
	puts -1
	exit
	end
end
if ni != ko
	puts -1
	exit	
end

result , now = 0, 0
while true
	result += 1
	s.gsub!("25", "")
	if s.size == 0
		break
	end
end
p result