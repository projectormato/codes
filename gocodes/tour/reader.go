package main

import "golang.org/x/tour/reader"

type MyReader struct{}

// TODO: Add a Read([]byte) (int, error) method to MyReader.
func (mr MyReader) Read(a []byte) (int, error){
	for i := 0; i < len(a); i++ {
		a[i] = 'A'
	}
	return len(b), nil
}

func main() {
	reader.Validate(MyReader{})
}

// import (
// 	"fmt"
// 	"io"
// 	"strings"
// )

// func main() {
// 	r := strings.NewReader("Hello, Reader!")

// 	b := make([]byte, 3)
// 	for {
// 		n, err := r.Read(b)
// 		fmt.Printf("n = %v err = %v b = %v\n", n, err, b)
// 		fmt.Printf("b[:n] = %q\n", b[:n])
// 		if err == io.EOF {
// 			break
// 		}
// 	}
// }