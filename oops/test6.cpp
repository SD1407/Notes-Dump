#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
 cin >> n;
 vector<int> vec(n);
 for(int i=0; i<n; i++) cin >> vec[i];
 unordered_map<int, int> mp;
 for(int i=0; i<n; i++){
    mp[vec[i]]++;
 }
 vector<vector<int>> ans;
 for(auto it: mp){
    vector<int> d;
    d.push_back(it.second);
    d.push_back(it.first);
    ans.push_back(d);
 }
 sort(ans.begin(), ans.end(), greater<vector<int>>());
vector<int> v;
for(auto it: ans) v.push_back(it[1])
return v;
}
;
 
return 0;
}