class Solution:
    def myPow(self, x: float, n: int) -> float:
        if n == 0:
            return 1

        partial = self.myPow(x, int(n / 2))

        if n % 2 == 0:
            return partial * partial
        else:
            if n < 0:
                return (partial * partial) / x
            return x * partial * partial
