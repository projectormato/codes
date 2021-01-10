run:
	g++-9 -std=c++14 main.cpp; ./a.out
test:
	g++-9 -std=c++14 main.cpp; cat input | ./a.out
wall:
	g++-9 -std=c++14 main.cpp -Wall -g -fsanitize=undefined -D_GLIBCXX_DEBUG; ./a.out
icpc:
	g++-9 -std=c++14 main.cpp; ./a.out < input > output
