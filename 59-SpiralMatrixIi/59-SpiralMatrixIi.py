# Last updated: 9/16/2025, 12:53:22 AM
class Solution(object):
    def generateMatrix(self, n):
        """
        :type n: int
        :rtype: List[List[int]]
        """
        sc = 0
        sr = 0
        er = n-1
        ec = n-1
        k = 1
        a = [[0 for _ in range(n)] for _ in range(n)]
        while(sc<=ec and sr<=er):

            for j in range(sc,ec+1):
                a[sr][j] = k
                k +=1
            sr +=1
            

            if sr<=er:
                for i in range(sr, er+1):
                    a[i][ec] = k
                    k +=1
                ec -=1
               
            
            if sc<=ec and sr<=er:
                for j in range(ec,sc-1,-1):
                    a[er][j] = k
                    k +=1
                er -=1
                
            
            if sc<=ec and sr<=er:
                for i in range(er,sr-1,-1):
                    a[i][sc] = k
                    k +=1
                sc +=1
                
        return a


        
            