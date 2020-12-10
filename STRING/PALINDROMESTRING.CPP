#QUESTION
Given a string S, check if it is palindrome or not.

Example 1:

Input: S = "abba"
Output: 1
Explanation: S is a palindrome
Example 2:

Input: S = "abc" 
Output: 0
Explanation: S is not a palindrome
 

Your Task:  
You don't need to read input or print anything. Complete the function isPlaindrome() which accepts string S and returns a boolean value


Expected Time Complexity: O(Length of S) 
Expected Auxiliary Space: O(1) 


Constraints:
1 <= Length of S <= 105
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#ANSWER

// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

using namespace std;
//User function template for C++
class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    // Your code goes here
	    int l=0,c,n= S.length()-1;
	    if(n==1) return 1;
	    while(n>l){
	        if(S[l]!= S[n]){
	         c=0;
	         goto l1;
	        }
	        else {
	            c=1;l++;n--;
	        }
	    }
	    l1:
	    return c;
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
