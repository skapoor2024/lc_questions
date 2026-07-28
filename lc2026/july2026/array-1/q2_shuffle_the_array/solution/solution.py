from typing import List

class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        res = [0]*2*n
        for i in range(n):
            res[2*i], res[2*i+1] = nums[i], nums[i+n]
        return res
