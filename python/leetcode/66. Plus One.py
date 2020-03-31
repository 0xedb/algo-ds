class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        carry = 0
        start = len(digits) - 1

        for i in range(start, -1, -1):
            if i == start:
                digits[start] += 1
            else:
                digits[i] += carry

            if digits[i] < 10:
                return digits

            digits[i] %= 10
            carry = 1

            if i == 0 and carry is not 0:
                digits.insert(0, carry)
        return digits
