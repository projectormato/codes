str = STDIN.gets.chomp
result = str.split("")
STDOUT.print result.count("A") ," ", result.count("B") ," ", result.count("C") ," ", result.count("D") ," ", result.count("E") ," ", result.count("F") , "\n"
