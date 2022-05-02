package Easy

func isPalindrome(x int) bool {
		var reverseSum int
		cloneX := x

		for cloneX > 0 {
			reverseSum = reverseSum * 10 + cloneX % 10

			cloneX = cloneX / 10
		}

		return reverseSum == x
}