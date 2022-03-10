                                                /* ------------------------------
                                                Made By        : Fouad_Roboticist 
                                                Challenge      : Minimum Cost Homecoming of a Robot in a Grid  
                                                Approach Used  : Array Traversal
                                                Time Complexity: (O(n)) 
                                                ------------------------------*/ 
// 
// we don't need BFS or DFS, We just have to calculate cost to move between homePos[0] and startPos[0] rows. and homePos[1] and startPos[1] columns
class Solution {
public:
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) 
    {
       
        int ans=0; 
        if (homePos[0]>=startPos[0])
        {
            for (int i = startPos[0]+1; i<=homePos[0]; i++)
            {
                ans+=rowCosts[i];
             }
        }
        else 
        {
             for (int i = startPos[0]-1; i>=homePos[0]; i--)
             { 
                ans+=rowCosts[i];
             } 
        }
    
    
    
     if (homePos[1]>=startPos[1])
        {
            for (int i = startPos[1]+1; i<=homePos[1]; i++)
            { 
                ans+=colCosts[i];
            } 
        }
    
        else 
        {
             for (int i = startPos[1]-1; i>=homePos[1]; i--)
                ans+=colCosts[i];
        }
        return ans;
    }
};