package main

import (
	"fmt"
	"math"
)

func main() {
 	i := 2.0
	for {
		fmt.Println(i, t(i))
		i += 1.0
	}
}

func t(n float64) float64 {
	if (n == 1.0) {
		return n
	}

	if (math.Mod(n, 2.0) == 0.0) {
		return t(n / 2.0)
	} else {
		return t(n * 3.0 + 1.0)
	}
}
