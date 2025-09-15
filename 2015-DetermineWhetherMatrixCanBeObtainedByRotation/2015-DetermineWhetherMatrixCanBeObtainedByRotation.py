# Last updated: 9/16/2025, 12:52:19 AM
class Solution(object):
    def findRotation(self, mat, target):
        """
        :type mat: List[List[int]]
        :type target: List[List[int]]
        :rtype: bool
        """
        n = len(mat)
        for _ in range(4):
            if mat == target:
                return True
            for i in range (n):
                for j in range (i+1,n):
                    mat[i][j], mat[j][i] = mat[j][i], mat[i][j]
            for i in range (n):
                mat[i].reverse()
        
        return False

        