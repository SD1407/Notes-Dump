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


    // FOR COUNTING ELEMENTS
    // array
    int arr[] = { 3, 2, 1, 3, 3, 5, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of times 3 appears : "
         << count(arr, arr + n, 3);

    // vector
    vector<int> vect{ 3, 2, 1, 3, 3, 5, 3 };
    cout << "Number of times 3 appears : "
         << count(vect.begin(), vect.end(), 3);

    // string
    
        string str = "geeksforgeeks";
  
    cout << "Number of times 'e' appears : " 
         << count(str.begin(), str.end(), 'e');
  

 
    return 0;
}