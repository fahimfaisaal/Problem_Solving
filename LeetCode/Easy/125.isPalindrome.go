package Easy

import (
	"regexp"
	"strings"
)

func isPalindrome(str string) bool {
	cleanPattern := regexp.MustCompile("(?i)[^a-z0-9]+")
	cleanedStr := strings.ToLower(cleanPattern.ReplaceAllString(str, ""))

	for i := 0; i < len(cleanedStr) / 2; i++ {
		if (cleanedStr[i] != cleanedStr[len(cleanedStr) + ^i]) {
			return false
		}
	}

	return true
}