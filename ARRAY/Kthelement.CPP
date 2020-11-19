#QUESTION
Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

Expected Time Complexity: O(n)

Input:
The first line of input contains an integer T, denoting the number of testcases. Then T test cases follow. Each test case consists of three lines. First line of each testcase contains an integer N denoting size of the array. Second line contains N space separated integer denoting elements of the array. Third line of the test case contains an integer K.

Output:
For each testcase, in a newline, print the kth smallest element.

Yout Task:
Complete kthSmallest and return the kth smallest element.

Constraints:
1 <= T <= 100
1 <= N <= 105
1 <= arr[i] <= 105
1 <= K <= N

Example:
Input:
2
6
7 10 4 3 20 15
3
5
7 10 4 20 15
4

Output:
7
15

Explanation:
Testcase 1: 3rd smallest element in the given array is 7.
Testcase 2: 4th smallest element in the given array is 15.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#ANSWER

//User function template for C++

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
void swap(int* x,int* y);
class Minheap{
    int* harr;
    int capacity;
    int heapsize;
    public:
    Minheap(int a[],int size);
    int parent(int i) {return (i - 1)/2;}
    int left(int i) {return (2*i + 1);}
    int right(int i) {return (2*i + 2);}
    int extractmin();
    void heapify(int i);
    int getmin(){ return harr[0];}
};

Minheap::Minheap(int a[],int size){
    heapsize=size;
    harr=a;
    int i= (heapsize-1)/2;
    while(i>=0){
        heapify(i);
        i--;
    }
}
int Minheap::extractmin(){
    if(heapsize==0) 
        return INT_MAX;
    int root = harr[0];
    if(heapsize>1){
        harr[0]=harr[heapsize-1];
        heapify(0);
    }
    heapsize--;
    return root;
}
void Minheap::heapify(int i){
    int l=left(i);
    int r= right(i);
    int smallest=i;
    if(l<heapsize&&harr[l]<harr[i])
        smallest=l;
    if(r<heapsize&&harr[r]<harr[smallest])
        smallest=r;
    if(smallest!=i){
        swap(&harr[i],&harr[smallest]);
        heapify(smallest);
    }
}

void swap(int *x,int *y){
    int temp =*x;
    *x=*y;
    *y=temp; 
}
int kthSmallest(int arr[], int l, int r, int k) {
    //code here
    Minheap mh(arr,r+1);
    
    for(int i=0;i<k-1;i++){
        mh.extractmin();
    }
     
    return mh.getmin();
}
