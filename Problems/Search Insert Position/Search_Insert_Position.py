class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        i=0													
        while(i < len(nums)):   
            if nums[i] == target or nums[i] > target:				
                return i
            i += 1
        return i