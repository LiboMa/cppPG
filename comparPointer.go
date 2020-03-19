package main

import "fmt"

func reset(i *int) {
	*i = 15
	fmt.Println(i)
}

func main() {
	//var inttr *int
	var j = 10
	reset(&j)
	fmt.Println(j)
}
