package main

import "fmt"

func binarySearch(arr []int, target int) int {
	start, end := 0, len(arr)-1
	mid := start + (end-start)/2

	for start <= end {
		if target > arr[mid] {
			start = mid + 1
		} else if target < arr[mid] {
			end = mid - 1
		} else {
			return mid
		}
		mid = start + (end-start)/2
	}
	return -1
}

func main() {
	arr := []int{1, 3, 3, 4, 5, 6, 7, 8}
	target := 8
	ans := binarySearch(arr, target)
	if ans == -1 {
		fmt.Println("Target is not present in given input")
	} else {
		fmt.Printf("The following element is present at index %d \n", ans)

	}
}
