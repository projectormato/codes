a = gets.chomp.split("")
b = gets.chomp.split("")
c = gets.chomp.split("")

def judge(target)
	
end


target = a[0]
a.delete_at(0)

for i in 0..99
	if target == 'a'
		if a.empty?
			puts "A"
			break
		end
		target = a[0]
		a.delete_at(0)
	elsif target == 'b'
		if b.empty?
			puts "B"
			break
		end
		target = b[0]
		b.delete_at(0)
	else
		if c.empty?
			puts "C"
			break
		end
		target = c[0]
		c.delete_at(0)
	end
end


