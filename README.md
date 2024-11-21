Sliding Window Maximum


You are given an array of integers A and a number k which represents the size of the window. The window covers k elements and starts at the left-end of the array. The window moves one index to the right at every step.

You need to return an array with the max element inside the window at every step.

Example:
A: [1, -2, 3, 4, 5, 3, 4, -1]
k: 3
Result: [3, 4, 5, 5, 5, 4]
Testing
Input Format
The first line contains an integer 'T', denoting the number of test cases.

Each test contains two lines:

An integer ‘n’ denoting the length of the array A.
An integer ‘k’ denoting the size of the window.
Output Format
For each test case, print n-k+1 space-separated integers denoting the max element in the window at each step.

Sample Input
2
4
1 2 3 4
2
5
1 -1 3 4 5
3
Expected Output
2 3 4
3 4 5