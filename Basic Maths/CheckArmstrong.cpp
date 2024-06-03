/*
Problem statement
You are given an integer 'n'. Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.


An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.

*/

bool checkArmstrong(int n){
	//Write your code here
	int len = (int)(log10(n) + 1);
	int dup = n, arm = 0;
	while (n != 0) {
		arm = arm + pow(n%10, len);
		n = n/10;
	}
	if (dup == arm) return true;
	else return false;
}
