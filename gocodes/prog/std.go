package main
import (
   "fmt"
   "os"
   "bufio"
)

func main() {
  stdin := bufio.NewScanner(os.Stdin)
  stdin.Scan()
  text := stdin.Text()
  fmt.Println(text)
}