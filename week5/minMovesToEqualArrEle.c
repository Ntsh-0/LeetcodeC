/*
Date - 7/nov/2026
Problem Link - https://leetcode.com/problems/minimum-moves-to-equal-array-elements/?envType=daily-question&envId=2026-11-01

Problem Statement
453. Minimum Moves to Equal Array Elements
Solved
Medium
Topics
premium lock icon
Companies
You are given an integer array nums of size n.

Return the minimum number of moves required to make all array elements equal.

In one move, you must increment n - 1 elements of the array by 1.

 

Example 1:

Input: nums = [1,2,3]
Output: 3
Explanation: Only three moves are needed (remember each move increments two elements):
[1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]
Example 2:

Input: nums = [1,1,1]
Output: 0
 

Constraints:

n == nums.length
1 <= nums.length <= 105
-109 <= nums[i] <= 109
The answer is guaranteed to fit in a 32-bit integer.

*/

//Code 
int minMoves(int* nums, int numsSize) {
    int i, min=nums[0], sum = 0, same = 1;

    //This loop finds the minimum element in the array and also checks if all the elements are same. we check it with the help of same variable
    for(i=1; i<numsSize; i++){
        if (nums[i] < min){
            min = nums[i];
            same = 0;
        }
        else if (nums[i] > min)
            same = 0;
    }

    //if all the elements are same then 0 moves are required so we return 0
    if (same)
        return 0;
    
    //here we finds the minimum number of moves it will take to equalize all the elements
    //instead of how question was saying to incresae two different elemnts we reduce the highest element by one which is a math trick.
    for(i=0; i<numsSize; i++){
        sum += nums[i] - min;
    }

    return sum;
}

//we can do this with more math like here x is current element
//total moves = sum of(x - smallest)
//total moves = sum of all elements - length of arr * (smallest)
//total moves = (sum of array) - n*smallest
