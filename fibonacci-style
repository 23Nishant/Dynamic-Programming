// climbing stairs problem #70

class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)
         return n;
        vector<int> dp(n+1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++)
         dp[i]=dp[i-1]+dp[i-2];
        
        return dp[n];
    }
};

// fibonacci numbers by DP problem #509

class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1)
        return n;

        vector<int> dp(n+1);
        dp[0]=0;
        dp[1]=1;
        for(int i=2; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
        
    }
};

//Nth Tribonacci number prblem #1137

class Solution {
public:
    int tribonacci(int n) {
        if(n==0)
        return 0;

        if(n==1 || n==2)
        return 1;

        vector<int> dp(n+1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;

        for(int i = 3; i<=n; i++){
            dp[i] = dp[i-1] +dp[i-2]+dp[i-3];
        }

        return dp[n];
        
    }
};

// House Robber problem #198

class Solution {
public:
    int rob(vector<int>& nums) {
        int currMax = 0;  
        int prevMax = 0;  
        
        for (int i = 0; i < nums.size(); i++) {
            int temp = max(prevMax + nums[i], currMax); 
            prevMax = currMax;  
            currMax = temp; 
        }
        
        return currMax;
    }
};
