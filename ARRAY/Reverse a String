#QUESTION

Given a string S as input. You have to reverse the given string.

Input: First line of input contains a single integer T which denotes the number of test cases. T test cases follows, first line of each test case contains a string S.

Output: Corresponding to each test case, print the string S in reverse order.

Constraints:
1 <= T <= 100
3 <= length(S) <= 1000

Example:
Input:
3
Geeks
GeeksforGeeks
GeeksQuiz

Output:
skeeG
skeeGrofskeeG
ziuQskeeG
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#ANSWER

#include<string>
#include<vector>
#include<iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    string s1;
    string result = "";
    vector <string> v1;
    while(T--)
    {
        cin>>s1;
        int len = s1.length();
        for(int j = len-1; j >= 0; j--)
        {
            result += s1[j];
        }
        v1.push_back(result);
        result = "";
    }
    for(auto i : v1)
    {
        cout<<i<<endl;
    }
    
	return 0;
}
