                                                /* ------------------------------
                                                Made By        : Fouad_Roboticist 
                                                Challenge      : Minimum Path Sum    
                                                Approach Used  : Dynamic Programming 
                                                Time Complexity: (O(n²)) 
                                                ------------------------------*/ 


class Solution {
    public : 
    // minimizing function 
    
    int minPathSum(vector <vector<int>> & tab)
    {
        // fast i/o in C++ 
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); 
        
       // the "tab" is a grid  
        int rows = tab.size();  
        if (rows==0) // if the grid is empty we return 0
            return 0; 
        int cols = tab[0].size(); //  otherwise we'll find the number of columns
        
        vector<vector<int>> dp(rows,vector<int> (cols,0)); // constructing the dp table, 
        
        int i, j; // to map
        
        dp[0][0]= tab[0][0];  // the starting point will have the same cost in both dp and tab 
        
        // filling the first row because it has only one path "only to the right"
        
            for (i=1; i<cols; i++)
            {
                dp[0][i]=dp[0][i-1] + tab [0][i];
            }
        // filling the first column because it has only one path " only to the bottom"
        
        for (i=1; i<rows; i++)
        {
            dp[i][0] = dp[i-1][0] + tab [i][0];
                
        }
        
        
        // filling the rest of the cells having two options  
        
        for (i=1; i<rows; i++)
            
            {
            for (j=1; j<cols; j++)
            {
                // our formula ! 
            dp[i][j]= tab [i][j] + min (dp[i-1][j], dp[i][j-1]); // take the minimum of top and left and add them to the cost of the cell
            
            }
            
        }
        return dp[rows-1][cols-1]; // the last cell (m,n)
    }
    
    
}; 