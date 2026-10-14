class Solution(object):
    def combine(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: List[List[int]]
        """
        result = []
        
        def backtrack(start, current_comb):
           
            if len(current_comb) == k:
                result.append(list(current_comb))
                return
            
           
            needed = k - len(current_comb)
            
          
            for i in range(start, n - needed + 2):
                current_comb.append(i)
                backtrack(i + 1, current_comb)
                current_comb.pop()  

        backtrack(1, [])
        return result

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna