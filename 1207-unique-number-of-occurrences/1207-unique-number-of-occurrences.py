class Solution(object):
    def uniqueOccurrences(self, arr):

        mp = {}
        temp = []

        for i in range (len(arr)):
            mp[arr[i]] = mp.get(arr[i] , 0) + 1
        
        for i in mp.values():
            temp.append(i)

        temp.sort()

        for i in range (len(temp) - 1):
            if temp[i] == temp[i + 1]:
                return False

        return True        