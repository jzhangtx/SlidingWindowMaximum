package main

import "fmt"

func GetArrayFromInput(count int, prompt string) []int {
	if count == 0 {
		return []int{}
	}

	fmt.Print(prompt)

	v := make([]int, count)
	for i := 0; i < count; i++ {
		fmt.Scan(&v[i])
	}

	return v
}

func GetWindow(vec []int, index, k int) int {
	u := index + k
	m := vec[index]
	for i := index + 1; i < u; i++ {
		m = max(m, vec[i])
	}

	return m
}

func MaxSlidingWindow(A []int, k int) []int {
	result := make([]int, len(A)-k+1)

	for i := 0; i < len(A)-k+1; i++ {
		result[i] = GetWindow(A, i, k)
	}

	return result
}

func main() {
	for {
		fmt.Print("Number of elements: ")
		var count int
		fmt.Scan(&count)
		if count == 0 {
			break
		}

		vec := GetArrayFromInput(count, "Please enter the array: ")

		fmt.Print("The window width: ")
		var k int
		fmt.Scan(&k)

		result := MaxSlidingWindow(vec, k)
		fmt.Print("The sliding windows maximum is ")
		fmt.Println(result)
	}
}
