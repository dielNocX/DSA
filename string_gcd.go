package main

import "fmt"

func main() {
	var a, b string
	a = "TAUXXTAUXXTAUXXTAUXXTAUXX"
	b = "TAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXX"
	if len(a) < len(b) {
		a, b = b, a
	}
	fmt.Printf("string1: %s string2: %s \n", a, b)
	gcdOfStrings(a, b)
	// fmt.Println(gcdOfStrings(a, b))
	// fmt.Println(a + a)
}

func gcdOfStrings(str1 string, str2 string) {
	var cek1 int
	var x, y, z, hasil string
	if len(str1) < len(str2) {
		str1, str2 = str2, str1
	}
	for i := 0; i < len(str2); i++ {
		x = str1[0 : i+1]
		fmt.Println("cek: ", x)
		for j := 0; j < len(str1)/(i+1); j++ {
			y = y + x
		}
		fmt.Println("diulang: ", y)

		for k := 0; k < len(str2)/(i+1); k++ {
			z = z + x
		}
		fmt.Println("diulang: ", z)

		if y == str1 && z == str2 {
			cek1 = len(x)
		}
		x = ""
		y = ""
		z = ""
		// if str1[i] == str2[i] {
		// 	x = x + string(str1[i])
		// }
		fmt.Println("huruf yg sama:", cek1)
	}

	hasil = str1[:cek1]
	fmt.Println(hasil)

}
