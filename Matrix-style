// Unique Paths problem #62

class Solution {
public:
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> dp(m,vector<int> (n,1));

        for(int i = 1;i<m;i++)
        {
            for(int j = 1;j<n;j++)
            {  
                dp[i][j] = dp[i][j-1] + dp[i-1][j];
            }
        }
        return dp[m-1][n-1];

        
    }
};

// Triangles problem #120

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> dp(triangle.back());
        for(int i = n-2; i>=0; i--){
            for(int j=0; j<=i; j++){
                dp[j] = triangle[i][j] + min(dp[j],dp[j+1]);
            }
        }
        return dp[0];
    }
};
