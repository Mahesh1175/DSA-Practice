# 1.Max Sum Subarray of size K

Given an array of integers arr[]  and a number k. Return the maximum sum of a subarray of size k.

Note: A subarray is a contiguous part of any given array.

Examples:

Input: arr[] = [100, 200, 300, 400] , k = 2
Output: 700
Explanation: arr3  + arr4 = 700, which is maximum.

Input: arr[] = [100, 200, 300, 400] , k = 4
Output: 1000
Explanation: arr1 + arr2 + arr3 + arr4 = 1000, which is maximum.

Input: arr[] = [100, 200, 300, 400] , k = 1
Output: 400
Explanation: arr4 = 400, which is maximum.

Constraints:
1 <= arr.size() <= 10^6
1 <= arr[i]<= 10^6
1 <= k<= arr.size()

# long is used to handle cases where the sum of subarray elements exceeds the range of int (up to 2×10^9) , as the maximum possible sum for this problem can reach 10^12 . This ensures the program avoids overflow errors for large arrays and values