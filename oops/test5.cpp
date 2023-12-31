#include<bits/stdc++.h>
using namespace std;
int solve(int x, int y){
    long long an = x;
    int ct = 0;
    for(int i = x+1; i<=y; i++){
        if((an&i) == 0) {
            ct++;
            continue;
        }
        else {
            an = an&i;
        }
    }
    return ct;
}
int main(){
int a = solve(1, 6);
int b = solve(2, 6);
b++;
int c = solve(2, 5);
c+=2;
int d = solve(1, 5);
d++;
cout << min(a, min(b, min(d, c)));
return 0;
}

// void solve(int z[]){
//     long long sum = 0;
//     for(int i=0; i<7; i++){
//         sum+=z[i];
//     }
    
//     if(sum == (4*(z[6]))){ cout << "YES" << endl;
//     else cout << " NO" << endl;
// }





