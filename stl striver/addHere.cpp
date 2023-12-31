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
    string r = s1.substr(1, 3); // sub striings
 
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
         << count(str.begin(), str.end(), 'e'); //count in strings
  

 
    return 0;
}


// how to access a particular element in set
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
 
    set<int> s(arr, arr + n);
    set<int>::iterator itr   // this method is important
        = s.begin(); // s.begin() returns a pointer to first
                     // element in the set
    advance(itr, k - 1); // itr points to kth element in set // its basically using loop in a different method.. 
 
    cout << *itr << "\n";
 
    return 0;
}



// FOR USING COMPARATERS IN MAP

// C++ Program to implement Map
// with External Sorting
// Criteria / Comparator
#include <bits/stdc++.h>
using namespace std;

// Comparator Function
struct cmp {
	bool operator()(int a, int b) const { return a > b; }  // IMPORTANT
};

int main()
{
	// Declaration of Map
	map<int, int> m1;

	// Insert element in map
	// m[i]=x Here, i is the key and m[i] is the value of
	// the map
	m1[0] = 5;
	m1[1] = 6;
	m1[2] = 7;
	m1[3] = 8;
	m1[4] = 9;

	// Without using External sorting criteria on map it
	// looks like
	for (auto& it : m1) {
		cout << it.first << "->" << it.second << endl;
	}
	cout << endl;

	// If we use External sorting Criteria on map
	// then we have to take one more extra data type in map
	// along with key and value of the map
	map<int, int, cmp> m2;

	// Here cmp is a user define data type in which we
	// define our external sorting function
	m2[0] = 5;
	m2[1] = 6;
	m2[2] = 7;
	m2[3] = 8;
	m2[4] = 9;

	// using External sorting criteria on map it looks like
	for (auto& it : m2) {
		cout << it.first << "->" << it.second << endl;
	}

	return 0;
}

// FOR THE ABOVE : https://www.youtube.com/watch?v=viOV5NMbLxE watch this video


// FOR MAKING ORDERED_SET OF VECTOR
https://www.geeksforgeeks.org/unordered-set-of-vectors-in-c-with-examples/
struct hashFunction 
{
  size_t operator()(const vector<int> 
                    &myVector) const 
  {
    std::hash<int> hasher;
    size_t answer = 0;
      
    for (int i : myVector) 
    {
      answer ^= hasher(i) + 0x9e3779b9 + 
                (answer << 6) + (answer >> 2);
    }
    return answer;
  }
};

INT MAIN(){


unordered_set<vector<int>, 
  hashFunction> unorderedsetOfVectors;

RETURN 0;
}


// IMPORTANT THING :
for priority_queue<pair<int, int>> pq; we are storing the value in auto operator, we can store it like auto [a, b] = pq.top(), here by default a will have first element and b will have last element


// how we generally generate subarrays ?? generally we do it by 3 loops
vector<vector<int>> vec;
for(int i=0;i<n; i++){
	for(int j = i; j<n;j ++){
		vector<int> ans;
		for(int k = i; k<=j ;k++){
			ans.push_back(arr[k]);  // but we can boil it down to O(n^3) by using one extra thing

		}
	vec.push_back(ans);
	}
}

for(int i=0;i<n; i++){
	vector<int> ans;
	for(int j = i; j<n;j ++){
		ans.push_back(arr[j]);
		vec.push_back(ans);  // by this slight modification we can boil it down to O(n^2)
	
	}
}


// also for now copying the duplicates as in 3sum problem, we are sorting the initial answer and we are putting it into a set and as we know set will store unique keys so it will eventually store all the unique keys
// but the better solution is to generate it like combinational sum recurison problem type of was // if(i>low && nums[i-1] == nums[i]) continue;


//STRING TO INTEGER, LONG INT AND LONG LONG INT

https://www.geeksforgeeks.org/stdstol-and-stdstoll-functions-in-c/

