#QUESTION

Given an array, cyclically rotate an array by one.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the size of the array. Then following line contains 'n' integers forming the array. 

Output:
Output the cyclically rotated array by one.

Constraints:
1<=T<=1000
1<=N<=1000
0<=a[i]<=1000

Example:
Input:
2
5
1 2 3 4 5
8
9 8 7 6 4 2 1 3

Output:
5 1 2 3 4
3 9 8 7 6 4 2 1
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#ANSWER
#include<iostream>
using namespace std;
int main()
 {
     int t,n,temp,a[1000];
     cin>>t;
     while(t--){
         cin>>n;
         for(int i=0;i<n;i++){
             cin>>a[i];
         }
         temp=a[n-1];
         for(int i=n-1;i>=0;i--){
             a[i]=a[i-1];
             if(i==0){
                 a[0]=temp;
             }
         }
         for(int i=0;i<n;i++){
             cout<<a[i]<<" ";
         }
         cout<<endl;
     }
	return 0;
}
