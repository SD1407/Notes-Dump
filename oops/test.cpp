#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
vector<int> vec(n);
double sum = 0;
for(int i=0; i<n; i++){
    cin >> vec[i];
    sum+=vec[i];
}
long long ans = sum + (2*(sum))/n;
cout << ans << endl;
return 0;
}

