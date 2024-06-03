/*
Problem statement
Given an integer ‘N’, your task is to write a program that returns all the divisors of ‘N’ in ascending order.



For example:
'N' = 5.
The divisors of 5 are 1, 5.

*/

#include<bits/stdc++.h>
int* printDivisors(int n, int &size){
// Write your code here
    vector<int>v;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n%i==0) {
            v.push_back(i);
            if ((n/i)!=i) {
                v.push_back((n/i));
            }
        }
    }
    sort(v.begin(), v.end());
    return v;
}
