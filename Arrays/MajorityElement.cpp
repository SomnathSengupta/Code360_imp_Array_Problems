/*
Problem statement
You are given an array 'a' of 'n' integers.



A majority element in the array ‘a’ is an element that appears more than 'n' / 2 times.



Find the majority element of the array.



It is guaranteed that the array 'a' always has a majority element.



Example:
Input: ‘n’ = 9, ‘a’ = [2, 2, 1, 3, 1, 1, 3, 1, 1]

Output: 1

Explanation: The frequency of ‘1’ is 5, which is greater than 9 / 2.
Hence ‘1’ is the majority element.

*/


//I will be using Moore's Voting Algorithm to reduce the extra space.

int majorityElement(vector<int> v) {
	// Write your code here
	int count = 0, ele = -1;
	for (int i = 0; i < v.size(); i++) {
		if (count == 0) {
			count = 1;
			ele = v[i];
		}
		else if (ele != v[i]) count--;
		else if (ele == v[i]) count++;
	}
	return ele; //I haven't check once more as in question it is stated that there must be majority element.
}