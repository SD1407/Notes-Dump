#include <bits/stdc++.h>
using namespace std;



int lcs(string &X, string &Y, int m, int n)
{
    // intitalizing a matrix of size (m+1)*(n+1)
    int L[m + 1][n + 1];
  
    /* Following steps build L[m+1][n+1] in bottom up fashion. Note
        that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;
  
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
  
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
  
    // L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] 
    return L[m][n];
}

void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}


int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
        cin >>n;
	    string s;
	    cin >> s;
        string s1 =s;
	    reverseStr(s1);
	
	   int ans = 0;
        
            ans = lcs(s, s1, n, n);
        
        cout << (ans / 2) << endl;

	}
	return 0;
}
