/*Problem statement
You are given a number 'n'.
Return number of digits in ‘n’*/


#include<bits/stdc++.h>
int countDigits(int n){
	// Write your code here.	
	return int(log10(n) + 1);
}