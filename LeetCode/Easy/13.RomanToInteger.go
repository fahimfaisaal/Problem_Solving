package Easy

func romanToInt(s string) int {
  romanMap := map[byte]int {
		'I': 1,
		'V': 5,
		'X': 10,
		'L': 50,
		'C': 100,
		'D': 500,
		'M': 1000,
	}

	stringLen := len(s)
	num := romanMap[s[stringLen - 1]]
		
	for i := stringLen - 2; i > -1; i-- {
		currentChar, afterChar := s[i], s[i + 1]

		if romanMap[currentChar] >= romanMap[afterChar] {
			num += romanMap[currentChar]
		} else {
			num -= romanMap[currentChar]
		}
	}

	return num
}