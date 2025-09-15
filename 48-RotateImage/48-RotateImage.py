# Last updated: 9/16/2025, 12:53:28 AM
class Solution(object):
    def rotate(self, m):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        n = len (m)
        for i in range (n):
            for j in range (i+1, n):
                m[i][j], m[j][i] = m[j][i], m[i][j]
        
        for i in range (n):
            for j in range (n//2):
                m[i][j], m[i][n-j-1] = m[i][n-j-1], m[i][j]
        