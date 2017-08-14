package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"sort"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func nextLine() string {
	sc.Scan()
	return sc.Text()
}

func main() {
	result := 0.0
	input := nextLine()
	n, _ := strconv.Atoi(input)
	tri := make([]int, 0)
	for i := 0; i < n; i++ {
		num, _ := strconv.Atoi(nextLine())
		tri = append(tri, num)
	}
	sort.Ints(tri)
	for i := n; i > 1; i -= 2 {
		result += math.Pow(float64(tri[i-1]), 2)
		result -= math.Pow(float64(tri[i-2]), 2)
	}

	if len(tri)%2 != 0 {
		result += math.Pow(float64(tri[0]), 2)
	}

	fmt.Println(float64((result * math.Pi)))
}
