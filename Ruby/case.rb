case STDIN.gets.to_i
when 100 then
	STDOUT.puts 'Perfect'
when 90..99 then
	STDOUT.puts 'Great'
when 60..89 then
	STDOUT.puts 'Good'
else
	STDOUT.puts 'Bad'
end
	