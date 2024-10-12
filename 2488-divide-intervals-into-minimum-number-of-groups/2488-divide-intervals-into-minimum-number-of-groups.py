class Solution(object):
    def minGroups(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: int
        """
        start , end = [],[]
        for i,j in intervals:
            start.append(i)
            end.append(j)

        start.sort ()
        end.sort()
        i = 0
        j =0
        ans = 0
        while i< len(intervals):
            if (start[i] <= end[j]):
                i+=1
            else:
                j+=1
            ans = max(ans,i-j)
        return ans