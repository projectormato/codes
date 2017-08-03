package main

import (
	"fmt"
	"math"
)

type ErrNegativeSqrt float64

func (e ErrNegativeSqrt) Error() string {
	return fmt.Sprintf("cannot Sqrt negative number: %g",
			float64(e) )
}

func Sqrt(x float64) (float64, error) {
	if x < 0 {
		return 0, ErrNegativeSqrt(x)
	}
	i := 0
	z,y := 1.0, 0.0
	for {
		i++
		y = z
		z = z - (math.Pow(z, 2) - x) / (2*z)
		if int(y*1000000) == int(z*1000000) {
			break
		}else if i == 20 {
			break
		}
	}
	return z, nil
}

func main() {
	fmt.Println(Sqrt(2))
	fmt.Println(Sqrt(-2))
	fmt.Println(ErrNegativeSqrt(-5).Error())
}

// func Sqrt(x float64) float64 {
// 	i := 0
// 	z,y := 1.0, 0.0
// 	for {
// 		i++
// 		y = z
// 		z = z - (math.Pow(z, 2) - x) / (2*z)
// 		if int(y*1000000) == int(z*1000000) {
// 			break
// 		}else if i == 20 {
// 			break
// 		}
// 	}
// 	fmt.Println(i)
// 	return z
// }

// func main() {
// 	fmt.Println(Sqrt(121))
// }
