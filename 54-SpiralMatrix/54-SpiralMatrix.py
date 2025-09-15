# Last updated: 9/16/2025, 12:53:25 AM
class Solution(object):
    def spiralOrder(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        sr = 0
        er = len(matrix) -1
        sc = 0
        ec = len(matrix[0]) -1
        a = []
        while(sr<=er and sc<=ec):

            for j in range (sc, ec+1):
                a.append(matrix[sr][j])
            sr +=1

            if sr<=er:
                for i in range(sr, er+1):
                    a.append(matrix[i][ec])
                ec -=1

            if sc<=ec and sr<= er:
                for j in range(ec, sc-1, -1):
                    a.append(matrix[er][j])
                er -=1

            if sr <= er and sc <= ec:
                for i in range(er, sr-1, -1):
                    a.append(matrix[i][sc])
                sc+=1
            
        return a
            