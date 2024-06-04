/*
Problem statement
Given two sorted arrays, ‘a’ and ‘b’, of size ‘n’ and ‘m’, respectively, return the union of the arrays.



The union of two sorted arrays can be defined as an array consisting of the common and the distinct elements of the two arrays. The final array should be sorted in ascending order.



Note: 'a' and 'b' may contain duplicate elements, but the union array must contain unique elements.



Example:
Input: ‘n’ = 5 ‘m’ = 3
‘a’ = [1, 2, 3, 4, 6]
‘b’ = [2, 3, 5]

Output: [1, 2, 3, 4, 5, 6]

Explanation: Common elements in ‘a’ and ‘b’ are: [2, 3]
Distinct elements in ‘a’ are: [1, 4, 6]
Distinct elements in ‘b’ are: [5]
Union of ‘a’ and ‘b’ is: [1, 2, 3, 4, 5, 6]
*/

vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int m = a.size();
    int n = b.size();
    int i = 0;
    int j = 0;
    vector<int> merge;
    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            if (merge.size() == 0 || merge.back() != a[i]) { //merge.size() == 0 for the first case  and the other part is for preventing duplicate
                merge.push_back(a[i]);
            }
            i++;
        }
        else{
            if (merge.size() == 0 || merge.back() != b[j]) { //merge.size() == 0 for the first case  and the other part is for preventing duplicate
                merge.push_back(b[j]);
            }
            j++;
        }
    }
    while (i < m) {
        if (merge.size() == 0 || merge.back() != a[i]) {
                merge.push_back(a[i]);
        }
         i++;
    }

    while (j < n) {
        if (merge.size() == 0 || merge.back() != b[j]) {
                merge.push_back(b[j]);
        }
        j++;
    }
    return merge;
}