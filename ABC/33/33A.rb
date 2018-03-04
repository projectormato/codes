n = gets.chomp.split("")
flag = true
for i in 0..n.length-2
	if n[i] != n[i+1]
		flag = false 
	end
end

if flag == true
	puts 'SAME'
else
	puts 'DIFFERENT'
end
