package Easy

import "strings"

func All(strs []string, Cb func (index int, str string) bool) bool {
	for i, str := range strs {
		if (!Cb(i, str)) {
			return false
		}
	}

	return true
}

func longestCommonPrefix(strs []string) string {
    firstStr := strs[0]

    for len(firstStr) != 0 {
			allMatched := All(strs, func (_ int, str string) bool {
				return strings.HasPrefix(str, firstStr)
			})

			if (allMatched) {
				return firstStr
			}

			firstStr = firstStr[0:len(firstStr) - 1]
		}

    return ""   
}