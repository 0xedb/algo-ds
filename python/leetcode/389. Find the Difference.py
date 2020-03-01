class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        sum_s = 0
        sum_t = 0

        for ch in s:
            sum_s += ord(ch)

        for ch in t:
            sum_t += ord(ch)

        return chr(sum_t - sum_s)