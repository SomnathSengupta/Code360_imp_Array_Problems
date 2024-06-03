/*
Problem statement
Given an integer, check if it is prime or not. Return True if the number is prime, otherwise False.



Note:
No need to print anything; it has already been handled.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;
	int count = 0;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n%i == 0) {
			count++;
			if ((n/i)!=i) count++;
		}
	}
	if (count == 2) 
		cout << "true";
	else
		cout << "false";
	
}
