class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        twice = -1
        sz = len(nums)
        arr = [True] * (sz+1)
        arr_sum = 0
        for num in nums:
            if arr[num]:
                arr_sum+=num
                arr[num] = False
            else:
                twice = num
        miss = sz*(sz+1)//2 - arr_sum
        return [twice,miss]

// optimum solution 
class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        n = len(nums)
        duplicate = -1
        for num in nums:
            idx = abs(num) - 1
            if nums[idx] < 0:
                duplicate = abs(num)
            else:
                nums[idx] = -nums[idx]
        missing = next(i + 1 for i in range(n) if nums[i] > 0)
        return [duplicate, missing]
