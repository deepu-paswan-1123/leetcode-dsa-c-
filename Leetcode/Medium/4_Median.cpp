/*
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
 

Constraints:

nums1.length == m
nums2.length == n
0 <= m <= 1000
0 <= n <= 1000
1 <= m + n <= 2000
-106 <= nums1[i], nums2[i] <= 106
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Arraymedian(vector<int>& merge, int size3) {
    int median;
    int n = size3;

    // Sorting the merged array to calculate the median
    sort(merge.begin(), merge.end());

    // Checking if the size is even or odd
    if (n % 2 == 0) {
        // Median for even number of elements is the average of the middle two elements
        int mid1 = n / 2 - 1;  // First middle element (0-based index)
        int mid2 = n / 2;      // Second middle element
        median = (merge[mid1] + merge[mid2]) / 2;
    } else {
        // Median for odd number of elements is the middle element
        median = merge[n / 2];  // Middle element (0-based index)
    }

    return median;
}


int main() {
    vector<int> arr1 = {1,3};
    vector<int> arr2 = {2};
    
    vector<int> merged;
    merged.reserve(arr1.size() + arr2.size());
    
    
    // Merge the two vectors
    merged.insert(merged.begin(), arr1.begin(), arr1.end());
    merged.insert(merged.end(), arr2.begin(), arr2.end());
    for(int val:merged){
        cout<<val<<" ";
    }
    cout<<endl;

    int size3=merged.size();
     cout << "Median of merged array: " << Arraymedian(merged, size3) << endl;

    return 0;
}