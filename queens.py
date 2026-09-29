class Solution(object):
    def minQueenMoves(self, source, target):
        """
        :type source: List[int]
        :type target: List[int]
        :rtype: int
        """
        a,b = source
        x,y = target

        #maximum will be two and minimum will be 0
        if a==x and b==y:
            return 0
        elif a==x or b==y or abs(a-x) == abs(b-y):
            return 1
        else:
            return 2
