class Solution:
    def findKthPositive(self, arr: List[int], k: int) -> int:
        list1 = []
        i = 1

        while len(list1) < k:
            if i not in arr:
                list1.append(i)
            i += 1

        return list1[k-1]

