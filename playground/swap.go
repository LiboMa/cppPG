package main

import "fmt"

func main() {
	//fmt.Println("vim-go")
	a := 1
	b := 2

	a, b = b, a
	fmt.Println(a, b)
}
