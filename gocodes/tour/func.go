package main

import "fmt"

func add(x int, y int) int {
	return x + y
}

func pripri() {
	fmt.Println("関数からのプリント")
}

func adds(x, y, z string) string {
	return x + y + z
}

func main() {
	fmt.Println(add(42, 13))
	pripri()
	fmt.Println(adds("I" , "am", "Go"))
}
