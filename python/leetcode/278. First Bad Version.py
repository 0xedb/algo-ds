# The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# def isBadVersion(version):


class Solution:
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        start = 1

        if n == 1:
            return 1
        while start < n:
            mid = start + int((n - start) / 2)
            bad = isBadVersion(mid)

            if bad:
                n = mid
            else:
                start = mid + 1
        return start
