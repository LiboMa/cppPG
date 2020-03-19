package main

import (
	"fmt"
	"time"
)

func ArrayPointerIterator(array *[5]int) {

	// loop range over the pointer

	start := time.Now()
	for _, i := range array {
		fmt.Println(i)
	}
	end := time.Since(start)
	fmt.Println("======", end)
}

func ArrayObjectIterator(array [5]int) {

	// loop range over the pointer
	start := time.Now()
	for _, i := range array {
		fmt.Println(i)
	}
	end := time.Since(start)
	fmt.Println("======", end)
}

func main() {

	var a int
	var b *int
	var c int

	a = 1
	b = &a
	c = *b

	fmt.Printf("a: %v, b: %v, c: %v\n", a, b, c)
	fmt.Printf("a pointer: %p, b pointer: %p, c pointer: %p\n", &a, &b, &c)
	fmt.Println("b pointer value", *b)

	if b == &a {
		fmt.Println("b is a")
	} else {
		fmt.Println("b is not a")
	}
	//fmt.Printf("a pointer: %v, b pointer: %v, c pointer: %v\n", *a, *b, *c) error, a and c is not a pointer, is just a alias of the address
	// test Array
	var Aarray [5]int
	var ArrayPointer *[5]int
	var Carray [5]int

	DSlice := []int{6, 7, 8, 9} // here is a slice which means with dynamic size of array
	Aarray[0] = 1
	Aarray[1] = 2
	Aarray[2] = 3
	Aarray[3] = 4
	Aarray[4] = 5

	ArrayPointer = &Aarray
	Carray = *ArrayPointer

	fmt.Println("Aarray", "ArrayPointer", "Carray", "DSlice")
	fmt.Println(Aarray, ArrayPointer, Carray, DSlice)
	fmt.Println(&Aarray[0], &ArrayPointer[0], &Carray[0], &DSlice[0])
	//fmt.Println(*Aarray, *ArrayPointer, *Carray, *DSlice) // error, A,C, D is not a pointer var
	fmt.Println(*ArrayPointer) // error, A,C, D is not a pointer var

	Carray[4] = 99
	Aarray[4] = 66

	// read elements of Aarray
	ArrayPointerIterator(&Aarray)
	// read elements from pointer
	ArrayPointerIterator(ArrayPointer)
	// read elements from another Memory Slice
	ArrayPointerIterator(&Carray)

	ArrayPointer[4] = 44
	fmt.Println("Modify Array from Pointer ArrayPointer[4] = 44 ")
	ArrayPointerIterator(&Aarray)

	fmt.Println("Loop array via object")
	ArrayObjectIterator(Aarray)

	// test slice with pointer arguments
	fmt.Println("test slice with pointer arguments")
	slice := []string{"a", "a"}
	func(slice *[]string) {
		(*slice)[0] = "b"
		(*slice)[1] = "b"
		fmt.Print(*slice)
	}(&slice)
	fmt.Print(slice)
}
