#include<bits/stdc++.h>
using namespace std;



int findNumberOfLIS(vector<int>& arr){
    
    int n = arr.size();
    
    vector<int> dp(n,1);
    vector<int> ct(n,1);
    
    int maxi = 1;
    
    for(int i=0; i<=n-1; i++){
        for(int prev_index = 0; prev_index <=i-1; prev_index ++){
            
            if(arr[prev_index]<=arr[i] && dp[prev_index]+1>dp[i]){
                dp[i] = dp[prev_index]+1;
                //inherit
                ct[i] = ct[prev_index];
            }
            else if(arr[prev_index]<=arr[i] && dp[prev_index]+1==dp[i]){
                //increase the count
                ct[i] = ct[i] + ct[prev_index];
            }
        }
         maxi = max(maxi,dp[i]);
    }
    
   for(int i=0; i<n ; i++){
    cout << dp[i] << " ";
   }
   cout << endl;
   for(int i=0; i<n ; i++){
    cout << ct[i] << " ";
   }
   return 0;
}

int main(){
vector<int> nums = {2,1,6,1,3,2};
int n = nums.size();
//  vector<int> dp(n , 1);
//         int mx = 1;
//         for(int i=1; i<dp.size(); i++){
//             for(int j = 0; j<i; j++){
//                 if(nums[i] > nums[j]){
//                     dp[i] = max(dp[j]+1, dp[i]);
//                 }
//             }
//             mx = max(mx,dp[i]);
//         }
//         for(auto it: dp) cout << it << " ";
//         cout << endl;
int a  = findNumberOfLIS(nums);
return 0;
}