package main
import (
   "fmt"
   "os"
   "bufio"
   "strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func nextLine() string {
	sc.Scan()
	return sc.Text()
}

func main() {
	in, _ := strconv.Atoi(nextLine())
	fmt.Println(in)
}