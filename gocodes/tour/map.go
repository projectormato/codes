package main

import (
	"fmt"
	"strings"
)

func main() {
	word := strings.Fields("a b cde")
	m := make(map[string]int)
	for i := range word{
		m[word[i]] += 1
	}
	fmt.Println(m)
}
