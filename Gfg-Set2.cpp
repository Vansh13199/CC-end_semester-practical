class Solution {
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n = val.size();
        vector<int>dp(W+1,0);
        
        for(int i=n-1;i>=0;i--){
            for(int j=W;j>=1;j--){
                
                int a = dp[j];
                int b = (wt[i]<=j)?val[i] + dp[j-wt[i]]:0;
                dp[j] = max(a,b);
            }
        }
        
        return dp[W];
    }
};