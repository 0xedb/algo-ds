class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        first = [1]
        second = [1, 1]
        if rowIndex == 0:
            return first
        if rowIndex == 1:
            return second

        for i in range(2, rowIndex + 1):
            start = 0
            third = [x for x in range(i + 1)]
            third[0] = 1
            third[i] = 1

            for j in range(1, i):
                third[j] = second[start] + second[start + 1]
                start += 1
            first = second
            second = third

        return second
