package main

import "fmt"

func main() {
	fmt.Println("Hello, 世界")
	var (
		a int //var
		b int
	)
	var c int
	a = 10
	fmt.Println(a)
	b = 100 //型推論
	fmt.Println(b)

}

//struct / interface / goroutine / channel