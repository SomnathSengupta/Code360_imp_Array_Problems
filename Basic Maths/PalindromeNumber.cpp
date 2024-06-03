/*
Problem statement
Check whether a given number ’n’ is a palindrome number.

Note :
Palindrome numbers are the numbers that don't change when reversed.
You don’t need to print anything. Just implement the given function.

*/

bool palindrome(int n)
{
    // Write your code here
    int dup = n, rev = 0;
    while (n != 0) {
        rev = rev*10 + (n%10);
        n = n/10;
    }
    if (rev == dup) return true;
    else return false;
}