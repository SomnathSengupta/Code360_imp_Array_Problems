/*
Problem statement
Given an array ‘a’ of size ‘n’-1 with elements of range 1 to ‘n’. The array does not contain any duplicates. Your task is to find the missing number.



For example:
Input:
'a' = [1, 2, 4, 5], 'n' = 5

Output :
3

Explanation: 3 is the missing value in the range 1 to 5.
*/
int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    int total = N*(N+1)/2, sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum = sum + a[i];
    }
    return total - sum;
}