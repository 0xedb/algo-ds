class Solution:
    def isPalindrome(self, s: str) -> bool:
        if str == "":
            return True
        start = 0
        end = len(s) - 1

        while start < end:
            if s[start].isalnum() and s[end].isalnum():
                if s[start].casefold() == s[end].casefold():
                    start += 1
                    end -= 1
                else:
                    return False

            if not s[start].isalnum():
                start += 1
            if not s[end].isalnum():
                end -= 1

        return True
