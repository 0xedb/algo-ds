class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        ans = []
        for i in range(1, n+1):
            toPrint = ""
            if i % 3 == 0:
                toPrint += "Fizz"
            if i % 5 == 0:
                toPrint += "Buzz"
            if not(i % 3 == 0 or i % 5 == 0):
                toPrint += str(i)
            ans.append(toPrint)
        return ans
        