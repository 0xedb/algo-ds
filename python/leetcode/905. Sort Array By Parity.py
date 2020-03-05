class Solution:
    def sortArrayByParity(self, A: List[int]) -> List[int]:
        pos = 0

        for i in range(len(A)):
            if A[i] % 2 == 0:
                temp = A[pos]
                A[pos] = A[i]
                A[i] = temp
                pos += 1
        return A
