package main

import "fmt"

func main() {
	var a, b string
	a = "abcd"
	b = "pq"
	fmt.Print(mergeAlternately(a, b))
}
func mergeAlternately(word1 string, word2 string) string {
	var a string = word1
	var hasil string
	if len(word1) < len(word2) {
		a = word2
	}
	for i := 0; i < len(a); i++ {
		if i < len(word1) {
			hasil = hasil + word1[i:i+1]
		}
		if i < len(word2) {
			hasil = hasil + word2[i:i+1]
		}
	}
	return hasil
}
