package main

import "fmt"

func main() {
	// test slice with pointer arguments
	fmt.Println("test slice with pointer arguments")
	slice := []string{"a", "a"}
	func(slice *[]string) {
		(*slice)[0] = "b"
		(*slice)[1] = "b"
		fmt.Println(*slice, slice)
	}(&slice)
	fmt.Println(slice)

	// 1. using object as input leads bugs
	slice = make([]string, 2, 3) // allocate a memory sigment
	fmt.Println(&slice[0])
	func(slice []string) {
		// slice = append(slice, "a", "a") // allocate a new memory sigment
		slice = append(slice, "a") // allocate a new memory sigment
		slice[0] = "b"
		slice[1] = "b"
		fmt.Print(slice) // [b b a]
		fmt.Println(&slice)
	}(slice)
	fmt.Print(slice) //[b b]

	// 2. using pointer instead, bug fixed.
	slice = make([]string, 2, 3) // allocate a memory sigment
	fmt.Println(&slice[0])
	func(slice *[]string) {
		// slice = append(slice, "a", "a") // allocate a new memory sigment
		*slice = append(*slice, "a") // allocate a new memory sigment
		(*slice)[0] = "b"
		(*slice)[1] = "b"
		fmt.Print(*slice) // [b b a]
		fmt.Println(&slice)
	}(&slice)
	fmt.Print(slice) //[b b]
}
