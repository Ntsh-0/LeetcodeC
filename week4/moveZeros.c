/*
Date - 3/nov/2026
Problem Link - https://leetcode.com/problems/move-zeroes/submissions/2187899211/?envType=problem-list-v2&envId=awhn703r

Problem Statement
283. Move Zeroes
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1

*/

//Code 
void moveZeroes(int* nums, int numsSize) {
    int i=0, j=numsSize-1, k;

    while(i<j){
        if (nums[i] == 0){
            for(k=i; k<j; k++) {
                nums[k] = nums[k+1];
            }
            nums[j] = 0;
            j--;
        }
        else
            i++;
    }
}
