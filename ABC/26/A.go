package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	stdin := bufio.NewScanner(os.Stdin)
	stdin.Scan()
	text := stdin.Text()
	n, _ := strconv.Atoi(text)
	var result int = 0
	for i := 1; i <= n/2; i++ {
		if i*(n-i) > result {
			result = i * (n - i)
		}
	}
	fmt.Println(result)
}
