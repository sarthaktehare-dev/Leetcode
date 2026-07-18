class Solution(object):
    def longestCommonPrefix(self, strs):
        ans = ""
        strs.sort()

        s1 = strs[0]
        s2 = strs[len(strs) - 1]

        i = 0
        j = 0

        while i < len(s1) and j < len(s2):
            if s1[i] == s2[j]:
                ans += s1[i]
                i += 1
                j += 1
            else: break

        return ans
        