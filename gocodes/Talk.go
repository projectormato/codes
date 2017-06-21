package main

import "fmt"

func main() {
	chatAPIURLFormat = "https://api.a3rt.recruit-tech.co.jp/talk/v1/smalltalk"
	ChatID = "Bi4XcHvZaQAexQ1luzQK8rjmjrJbjNJS"

	url := fmt.Sprintf(chatAPIURLFormat, .ChatID, "こんにちは")

	post(url, &json)
	fmt.Printf("%#v\n", json)
}