class Solution(object):
    def maxDistance(self, moves):
        """
        :type moves: str
        :rtype: int
        """
        X,Y,I=0,0,0
        for m in moves:
            if m=="U":
                Y+=1
            elif m=="D":
                Y-=1
            elif m=="R":
                X+=1
            elif m=="L":
                X-=1
            else:
                I+=1
        return abs(X)+abs(Y)+I