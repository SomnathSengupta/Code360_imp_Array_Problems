/*
Problem statement
You have been given an array ‘a’ of ‘n’ unique non-negative integers.



Find the second largest and second smallest element from the array.



Return the two elements (second largest and second smallest) as another array of size 2.



Example :
Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
Output: [4, 2]

The second largest element after 5 is 4, and the second smallest element after 1 is 2.
*/
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int largest = a[0];
    int sLargest = INT_MIN;
    int smallest = a[0];
    int sSmallest = INT_MAX;


    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            sLargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > sLargest) {
            sLargest = a[i];
        }
    }

     for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            sSmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] != smallest && a[i] < sSmallest) {
            sSmallest = a[i];
        }
    }

    return {sLargest, sSmallest};
}
