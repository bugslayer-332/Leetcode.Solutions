class Solution {
public:
    // Again going with the blunt approach of the recursion and will use that
    // to form my DP 
    /*int climbStairs(int n) {
        if(n == 1 || n == 2) return n ;
        else return climbStairs(n-1) + climbStairs(n-2) ;
        
    }*/
    // As usual , got TLE will now write the DP solution.
    // We will reference the dp vector in another function and call and initalize that in
    // the main function.
    int helper(vector<int> &memo, int n)
    {
        if(memo[n] != -1) return memo[n] ;
        else 
        {
            if(n == 1)memo[n] =1 ;
            else if(n == 2) memo[n] = 2 ;
            else memo[n] = helper(memo, n-1) + helper(memo, n-2 ) ;
            return memo[n] ;
        }
    }
    int climbStairs(int n) {
        /*if(n == 1 || n == 2) return n ;
        else return climbStairs(n-1) + climbStairs(n-2) ;*/
        vector<int> memo(50,-1) ;
        return helper(memo,n) ;
    }
    
};
