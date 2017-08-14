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
	a,b := in/100, in%10
	if a == b{
		fmt.Println("Yes")
	}else{
		fmt.Println("No")
	}
}