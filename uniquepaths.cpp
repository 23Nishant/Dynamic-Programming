// 
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();

        int sum=0;
        for(int i=0;i<m;i++)
        {
            sum+=grid[0][i];
            grid[0][i]=sum;
        }
        sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=grid[i][0];
            grid[i][0]=sum;
        }

        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                grid[i][j]= min(grid[i-1][j], grid[i][j-1]) + grid[i][j];
            }
        }
        return grid[n-1][m-1];
    }
};
