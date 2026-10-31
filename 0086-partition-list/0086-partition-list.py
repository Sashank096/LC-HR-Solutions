

class Solution(object):
    def partition(self, head, x):
        """:type head: Optional[ListNode]"""
        """:type x: int"""
        """:rtype: Optional[ListNode]"""
       
        smaller_dummy = ListNode(0)
        greater_dummy = ListNode(0)
        
      
        smaller = smaller_dummy
        greater = greater_dummy
        
        current = head
        
        while current:
            if current.val < x:
                smaller.next = current
                smaller = smaller.next
            else:
                greater.next = current
                greater = greater.next
            current = current.next
            
       
        greater.next = None
        
       
        smaller.next = greater_dummy.next
        
        return smaller_dummy.next

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna