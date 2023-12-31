// 10,_,_,_,_,15

#include<bits/stdc++.h>
using namespace std;
int solve(int prev1, int prev2, int n, int check){
    int p1 = prev1;
    int p2 = prev2;
    for(int i=2; i<=n-1; i++){
        int curr = p1+p2;
        p1 = p2;
        p2 = curr;
        
    }
    if(check == p2) return prev2;
    else return -1;
}
int main(){
    int c = 0;
    string s = "10,_,_,_,_,15";
    int n = s.size();
    string a;
    vector<pair<int, int>> vec;
    // int c = 1;
    for(int i=0; i<n;i++){
        if(s[i] >= 48 && s[i] <= 57){
            // cout << s[i] << endl;
            int j = i;
            while(i<n){
                if(s[i] >= 48 && s[i] <= 57) i++;
                else break;
            }
            string a = s.substr(j, (i-j));

            // cout << a << endl;
            int d = stoi(a);
            // if(j > 0) 
            vec.push_back({d, j});
            
            // c++;
        }
        // else if(s[i]>='0' && s[i] <= '9') a.push_back(s[i]);
    }
    for(auto it : vec) cout << it.first << " " << it.second <<endl;
    int n1 , n2;
    int ck = 0;
    int d1, d2;
    for(auto it : vec) {
        ck++;
        if(ck == 1 ) {d1 = it.first; n1 = it.second;}
        else if(ck == 2) {d2 = it.first; n2 = it.second;}
        
    }
    int lim = (n1+n2)/2;
    int mx = d2-d1;
    int ans ;
    for(int i = mx; ; i--){
        ans = solve(d1, i, lim, d2);
        if(ans != -1) break; 
    }
    cout << ans << endl;



return 0;
}

