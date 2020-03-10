import "regexp"
import "strings"

func isPalindrome(s string) bool {
    if len(s) == 0 {
        return true
    }    
    
    s = strings.ToLower(s)
    
    start := 0
    end := len(s) - 1
    var isLetter = regexp.MustCompile(`^[a-zA-Z0-9]+$`).MatchString

    
    for start < end {
        if isLetter(string(s[start])) && isLetter(string(s[end]))  {
            if s[start] == s[end] {
                start++; end--;
            } else {return false}
        }
        
        if !isLetter(string(s[start])) {start++;}
        if !isLetter(string(s[end])) {end--;}
    }
    
    return true
}