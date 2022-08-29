class Solution {
public:
    // Approach : starting with recursion , then making my way to dp 
    // So, lets approach this question from back i.e. from the end. 
    // We assume that we are already starting from the top and we are coming down 
    // And each 1/2 step we come down we add the cost of that particular thing.
    // min(cost of coming to n-1 + cost[n-1] + cost of coming to n-2 + cost[n-2] )
    // got the tle now , will shift to dp approach
    
    int helper(vector<int> &cost , int n , vector<int> &dp)
    {
        if(dp[n] != -1) return dp[n] ;
        else{
        if(n == 0) dp[n] = 0 ;
        else if (n ==1 ) dp[n] = 0 ;
        else dp[n] = min( helper(cost, n-1,dp) + cost[n-1] , helper(cost , n-2, dp) + cost[n-2]) ;
        return dp[n] ;
        }
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size() ;
     /*   int top = n ;
        return min(minCostClimbingStairs)*/
        vector<int> dp(1001,-1) ;
        return helper(cost, n,dp) ;
            
        
    }
};
