class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        if len(arr) == 1:
            return arr

        map = {}

        for i in arr:
            if i in map:
                map[i] = map[i] + 1
            else:
                map[i] = 1

        return len(set(map.values())) == len(map)
