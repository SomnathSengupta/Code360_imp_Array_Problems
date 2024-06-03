/*
Problem statement
Calculate and return GCD(Greatest Common Divisor) of two given numbers x and y.

Note :
Numbers should be in range of Integer.
*/
int gcd(int a,int b)
{
	//Write your code here
	while (a > 0 && b > 0) {
		if (a > b) a = a%b;
		else b = b%a;
	}
	if (a == 0) return b;
	else return a;
}
