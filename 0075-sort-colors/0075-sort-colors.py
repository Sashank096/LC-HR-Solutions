class Solution(object):
    def sortColors(self, nums):
        
        count0 = nums.count(0)
        count1 = nums.count(1)
        count2 = nums.count(2)
        
        nums[:count0] = [0] * count0
        nums[count0:count0 + count1] = [1] * count1
        nums[count0 + count1:] = [2] * count2

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna