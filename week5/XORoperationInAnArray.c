https://leetcode.com/problems/xor-operation-in-an-array/?envType=problem-list-v2&envId=prshgx6i
/*
Date - 8/nov/2026
Problem Link - 

Problem Statement
1486. XOR Operation in an Array
Solved
Easy
Topics
premium lock icon
Companies
Hint
You are given an integer n and an integer start.

Define an array nums where nums[i] = start + 2 * i (0-indexed) and n == nums.length.

Return the bitwise XOR of all elements of nums.

 

Example 1:

Input: n = 5, start = 0
Output: 8
Explanation: Array nums is equal to [0, 2, 4, 6, 8] where (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8.
Where "^" corresponds to bitwise XOR operator.
Example 2:

Input: n = 4, start = 3
Output: 8
Explanation: Array nums is equal to [3, 5, 7, 9] where (3 ^ 5 ^ 7 ^ 9) = 8.
 

Constraints:

1 <= n <= 1000
0 <= start <= 1000
n == nums.length

*/

//Code 
int xorOperation(int n, int start) {
    int i, sum;
    int nums[n];

    //creating array
    for(i=0; i<n; i++){
        nums[i] = start + 2*i;
    }

    //assiging initial value
    sum = nums[0];

    //taking XOR
    for(i=1; i<n; i++){
        sum = sum^nums[i];
    }
    return sum;
}

// int xorOperation(int n, int start) {
//     //can also be done without ever creating an array
//     int sum = start, i=0;

//     for(i=1; i<n; i++){
//         sum = sum^(start+2*i);
//     }
//     return sum;
// }
