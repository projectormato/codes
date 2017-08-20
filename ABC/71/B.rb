input = gets
result = ''
flag = 'a'
while flag != 'aa'
	unless input.include?(flag)
		result = flag
		break
	end
	flag = flag.next()
end
if result != ''
	puts result
else
	puts 'None'
end
