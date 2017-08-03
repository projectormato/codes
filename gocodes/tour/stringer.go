package main

import "fmt"

// type Person struct {
// 	Name string
// 	Age  int
// }

// func (p Person) String() string {
// 	return fmt.Sprintf("%v (%v years)", p.Name, p.Age)
// }

// func main() {
// 	a := Person{"Arthur Dent", 42}
// 	z := Person{"Zaphod Beeblebrox", 9001}	
// 	fmt.Println(a, z)
// }


type IPAddr [4]byte

// TODO: Add a "String() string" method to IPAddr.

func (ip IPAddr) String() string{
	return fmt.Sprintf("%v.%v.%v.%v", ip[0], ip[1], ip[2], ip[3])	
}

func main() {
	hosts := map[string]IPAddr{
		"loopback":  {127, 0, 0, 1},
		"googleDNS": {8, 8, 8, 8},
	}
	for name, ip := range hosts {
		fmt.Printf("%v: %v\n", name, ip)
	}
}
