//Swapping pairs make sum equal
/*

Given two arrays of integers A[] and B[] of size N and M, 
the task is to check if a pair of values (one value from each array) exists such that swapping the elements of the pair will make the sum of two arrays equal.

 

Example 1:

Input: N = 6, M = 4
A[] = {4, 1, 2, 1, 1, 2}
B[] = (3, 6, 3, 3)
Output: 1
Explanation: Sum of elements in A[] = 11
Sum of elements in B[] = 15, To get same 
sum from both arrays, we can swap following 
values: 1 from A[] and 3 from B[]




Example 2:

Input: N = 4, M = 4
A[] = {5, 7, 4, 6}
B[] = {1, 2, 3, 8}
Output: 1
Explanation: We can swap 6 from array 
A[] and 2 from array B[]

*/




/*
lass Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        sort(A,A+n);
        sort(B,B+m);
        int sumA=0, sumB=0;
        
        for(int i=0; i<n; i++){
            sumA+=A[i];
        }
        for(int i=0; i<m; i++){
            sumB+=B[i];
        }
        int d=abs(sumA-sumB);
        if(d==0){
            return 1;
        }
        
        int i=0, j=0;
        while(i<n && j<m){
            if(sumA-A[i]+B[j]== sumB-B[j]+A[i]){
                return 1;
            }else if(sumA-A[i]+B[j] > sumB-B[j]+A[i]){
                i++;
            }else{
                j++;
            }
        }
        return -1;
	}
};
*/