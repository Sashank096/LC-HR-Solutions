class Solution(object):
    def minimumTotal(self, triangle):
        """
        :type triangle: List[List[int]]
        :rtype: int
        """
       
        for row in range(len(triangle) - 2, -1, -1):
            for col in range(len(triangle[row])):
                
                triangle[row][col] += min(triangle[row + 1][col], triangle[row + 1][col + 1])
        
        
        return triangle[0][0]

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna