a = gets.chomp.split("")
b = gets.chomp.split("")
c = gets.chomp.split("")

def turn(user)
	if user.empty?
		return puts user
	end
	nex = user[0]
	p nex
	user.delete_at(0)
	case nex
	when 'a' then
		turn(a)
	when 'b' then
		turn(b)
	when 'c' then
		turn(c)
	end
end

turn(a)