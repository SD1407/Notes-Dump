#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
vector<int> vec(n);

for(int i=0; i<n; i++){
    cin >> vec[i];
    
}
int sume=0, sumo=0;
for(int i=0; i<n; i++){
    if(i%2 == 0) sume+=vec[i];
    else sumo+=vec[i];
}
cout << sumo^sume << endl;
return 0;
}