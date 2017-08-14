package main

import (
	"fmt"
	"sort"
	"math"
)

func main() {
	a := []int{1,6,2,10}

	sort.Ints(a)

	fmt.Println(a,math.Pow(float64(a[1]),2))

}
