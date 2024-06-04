/*
Problem statement
There is an array ‘A’ of size ‘N’ with an equal number of positive and negative elements.

Without altering the relative order of positive and negative numbers, you must return an array of alternative positive and negative values.

Note:

Start the array with a positive number. 
For example

Input:
A = [1, 2, -4, -5], N = 4
Output:
1 -4  2 -5
Explanation: 
Positive elements = 1, 2
Negative elements = -4, -5
To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.
*/


vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    int pos = 0, neg = 1;
    vector<int>v(a.size(), 0);
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 0) {
            v[neg] = a[i];
            neg = neg + 2;
        }
        if (a[i] > 0) {
            v[pos] = a[i];
            pos = pos + 2;
        }
    }
    return v;
}