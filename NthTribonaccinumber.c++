class Solution {
public:
    // first implementing the solution using recursion 
    /* tribonacci(int n) {
        if( n ==  0) return 0 ;
        else if( n == 1) return 1 ;
        else if(n == 2) return 1 ;
        else return tribonacci(n-3) + tribonacci(n-2) + tribonacci(n-1 ) ;
        
    }*/
    // recursion is giving TLE , now using Dynamic Programming 
    int memoz(vector<int> &memo, int n )
    {
        if(memo[n]!= -1) return memo[n] ;
        else {
            if(n == 0) memo[n] = 0 ;
            else if( n == 1 ) memo[n] = 1 ;
            else if(n == 2) memo[n] = 1 ;
            else memo[n] = memoz(memo,n-3)   +   memoz(memo,n-2)+ memoz(memo,n-1)  ;
            return memo[n] ;    }
    }
    
     int tribonacci(int n) {
        vector<int> memo(40,-1)  ;
        return memoz(memo,n) ;
        
    }
    
};
