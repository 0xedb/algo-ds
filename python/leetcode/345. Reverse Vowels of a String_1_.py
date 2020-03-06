class Solution:
    def reverseVowels(self, s: str) -> str:
        vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
        start = 0
        end = len(s) - 1
        s = [x for x in s]

        while start < end:
            if s[start] in vowels and s[end] in vowels:
                temp = s[start]
                s[start] = s[end]
                s[end] = temp
                start += 1
                end -= 1
                continue

            if s[end] not in vowels:
                end -= 1
            if s[start] not in vowels:
                start += 1

        return "".join(s)