class Solution:
    def reverseVowels(self, s: str) -> str:
        vowels = ['a', 'e', 'i', 'o', 'u']
        start = 0
        end = len(s) - 1

        while start < end:
            if s[start].casefold() in vowels and s[end].casefold() in vowels:
                st = s[start]
                en = s[end]
                s = s[:start] + en + s[start + 1:end] + st + s[end + 1:]
                start += 1
                end -= 1
                continue

            if s[end].casefold() not in vowels:
                end -= 1
            if s[start].casefold() not in vowels:
                start += 1

            print(start, end, len(s))

        return s
