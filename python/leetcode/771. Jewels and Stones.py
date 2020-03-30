class Solution:
    def numJewelsInStones(self, J: str, S: str) -> int:
        count = 0
        stones = set(J)

        for w in S:
            if w in stones:
                count += 1

        return count
