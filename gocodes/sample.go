package main

import "fmt"

func main() {
	var num int
	var pow int
	var result = 1

	num = 3
	pow = 6
	for i := 0; i < pow; i++ {
		result *= num
	}
	fmt.Println( num ,"の" , pow ,"乗は",result,"です. \n")
}