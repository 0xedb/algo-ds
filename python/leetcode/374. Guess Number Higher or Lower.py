# The guess API is already defined for you.
# @param num, your guess
# @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
# def guess(num: int) -> int:


class Solution:
    def guessNumber(self, n: int) -> int:
        start = 1
        ans = -1

        while start <= n:
            mid = start + int((n - start) / 2)
            g = guess(mid)
            if g == 0:
                return mid
            if g == -1:
                n = mid - 1
            else:
                start = mid + 1

        return ans
