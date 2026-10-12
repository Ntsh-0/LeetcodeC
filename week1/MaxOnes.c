/*
Date - 1/oct/2026
Problem Link - https://leetcode.com/problems/max-consecutive-ones/

Problem Statement
485. Max Consecutive Ones
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given a binary array nums, return the maximum number of consecutive 1's in the array.

 

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2
 

Constraints:

1 <= nums.length <= 105
nums[i] is either 0 or 1

*/

//Code 

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int maxOne = 0;
    int i, temp=0;

    /*This loop loops through all the elements in the array and check if the current number is 0 or 1. if it is 1 then temp is incremented by 1
    
    But if current number is 0 then it is checked if temp > maxOne to know if the current sequence continious ones is > the previous one if it is yes then maxOne is updated with new value. And at last temp is again set to 0 to check for next continious 1's
    */
    for(i=0; i<numsSize; i++) {
        if (nums[i] == 1) {
            temp += 1;
        }
        else{
            if (temp > maxOne) {
                maxOne = temp;
            }
            temp = 0;
        }
    }
    if (temp > maxOne) 
        maxOne = temp;
    return maxOne;
}
