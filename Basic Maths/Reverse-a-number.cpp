/*
Problem statement
Write a program to generate the reverse of a given number N. Print the corresponding reverse number.

Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.


*/

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int rev = 0, number;
	cin >> number;

	while (number != 0) {
		rev = rev*10 + (number%10);
		number = number/10;
	}
	cout << rev;

	
}
