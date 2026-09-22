class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=s.lower()
        s="".join(c for c in s if c.isalnum())
        return s==s[::-1]
        # rev=s[::-1]
        # if s==rev:
        #     return True
        # else:
        #     return False