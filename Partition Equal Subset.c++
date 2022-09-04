class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size() ;
        int sum = 0 ;
        for(int i = 0 ; i < n ; i++){
            sum += nums[i] ;
            
        }
        if(sum%2 ==0){
            int k = sum/ 2 ;
            bool t[n+1][k+1] ;
            for(int i = 1; i<=k ; i++ )
            {
                t[0][i] = 0 ;
                
            }
            for(int i = 0 ; i <= n ; i++){
                t[i][0] = 1 ;
            }
            
 
 
                for(int i = 1;i<= n;i++) {
                    for(int j = 1; j <= k ; j++){
                        
                        if(nums[i-1] <= j )  t[i][j] = t[i-1][j-nums[i-1]] ||t[i-1][j] ;
                        else  t[i][j] = t[i-1][j] ;
                    }
                }
            return t[n][k] ;
            
            
            
            
        }
        else return 0 ;
    }
};
