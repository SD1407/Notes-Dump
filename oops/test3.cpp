#include<bits/stdc++.h>
using namespace std;
bool solve(string s1, string s2){
    int ct[256] = {0};
    if(s1.size() != s2.size()) return false;
    else {
        int n = s1.size();
        for(int i=0; i<n; i++){
            ct[s1[i] - 'A']++;
            ct[s2[i] - 'A']--;
        }
        for(int i=0; i<256; i++){
            if(ct[i] != 0) return false;
        }
        // return true;
    }
    return true;

}
int main(){
    cout << solve("abcd", "adce");
return 0;
}