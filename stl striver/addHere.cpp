#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// CPP program to illustrate substr()
#include <string.h>
#include <iostream>
using namespace std;
 
int main()
{
    // Take any string
    string s1 = "Geeks";
    // here we can use the string s1 as a string
    // s1[1] will give us "e"   (remember)
 
    // Copy three characters of s1 (starting
    // from position 1)
    string r = s1.substr(1, 3);
 
    // prints the result
    cout << "String is: " << r;
 
    return 0;
}