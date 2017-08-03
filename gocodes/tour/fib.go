package main

import "fmt"

// func adder() func(int) int {
// 	sum := 0
// 	return func(x int) int {
// 		sum += x
// 		return sum
// 	}
// }

// func main() {
// 	pos, neg := adder(), adder()
// 	for i := 0; i < 10; i++ {
// 		fmt.Println(
// 			i,
// 			pos(-2*i),
// 			neg(-2*i),
// 		)
// 	}
// }

func fib() func() int{
	x, result := 1, 0
	return func () int{
		x, result = result , x + result
		return result
	}
	
}

func main() {
	f := fib()
	for i := 0; i < 10; i++ {
		fmt.Println(f())
	}
}