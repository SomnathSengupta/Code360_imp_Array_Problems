/*
Problem statement
You are given an array 'arr' of length 'n', consisting of integers.



A subarray is a contiguous segment of an array. In other words, a subarray can be formed by removing 0 or more integers from the beginning and 0 or more integers from the end of an array.



Find the sum of the subarray (including empty subarray) having maximum sum among all subarrays.



The sum of an empty subarray is 0.



Example :
Input: 'arr' = [1, 2, 7, -4, 3, 2, -10, 9, 1]

Output: 11

Explanation: The subarray yielding the maximum sum is [1, 2, 7, -4, 3, 2].
*/


//**************I am using Kadanes's Algorithm****************

#include <vector>
#include <climits>
using namespace std;

long long maxSubarraySum(vector<int> arr, int n)
{
    int sum = 0;
    int maxi = INT_MIN;
    bool hasPositive = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) hasPositive = true;
        sum = sum + arr[i];
        maxi = max(sum, maxi);
        if (sum < 0) sum = 0;
    }

    if (!hasPositive) return 0;
    return (long long)maxi;
}

