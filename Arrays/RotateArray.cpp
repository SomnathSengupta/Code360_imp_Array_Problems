/*
Problem statement
Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.

Example:
'arr '= [1,2,3,4,5]
'k' = 1  rotated array = [2,3,4,5,1]
'k' = 2  rotated array = [3,4,5,1,2]
'k' = 3  rotated array = [4,5,1,2,3] and so on.
*/

vector<int> rotateArray(vector<int>arr, int d) {
    // Write your code here.
    int n = arr.size();
    d = d%n;
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }
    int j = 0;
    for (int i = n - d; i < n; i++) {
        arr[i] = temp[j];
        j++;
    }
    return arr;
}
/*
Approcah 2:

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size();
    k = k%n;

    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());

    return arr;
}

*/
