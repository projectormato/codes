input = gets.chomp.split("")
t = gets.to_i
up = 0
down = 0
rigth = 0
left = 0
q = 0
for i in 0..input.length
	case input[i]
	when 'U'
		up += 1
	when 'D'
		down += 1
	when 'R'
		rigth += 1
	when 'L'
		left += 1
	when '?'
		q += 1
	end
end
tate = (up - down).abs
yoko = (rigth - left).abs
if t == 1
	puts  tate + yoko + q
else
	if tate + yoko >= q
		puts  tate + yoko - q
	else
		puts  (tate + yoko - q % 2).abs
	end
end
