func reverseVowels(s string) string {
    str := []uint8(s)
    vowels := map[byte]byte{
        		byte('a'): byte('a'),
				byte('e'): byte('e'),
				byte('i'): byte('i'),
				byte('o'): byte('o'),
				byte('u'): byte('u'),
				byte('A'): byte('A'),
				byte('E'): byte('E'),
				byte('I'): byte('I'),
				byte('O'): byte('O'),
				byte('U'): byte('U'),

    }
    start := 0
    end := len(s) - 1
    
    for start < end {
        _, ok := vowels[s[start]] 
        _, fine := vowels[s[end]]
        
        if ok && fine {
            temp := str[start]
            str[start] = str[end]
            str[end] = temp
            start++
            end--
            continue
        } 
        if ok != true {
            start++
        }
        if fine != true {
            end--
        }
    }
    
    return string(str)
}