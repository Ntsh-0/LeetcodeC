/*
Date - 16/oct/2026
Problem Link - https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/?envType=problem-list-v2&envId=vpu8c115

Problem Statement
448. Find All Numbers Disappeared in an Array
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

 

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
Example 2:

Input: nums = [1,1]
Output: [2]
 

Constraints:

n == nums.length
1 <= n <= 105
1 <= nums[i] <= n
 

Follow up: Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space

*/

//Code 

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    //i can jump from index to index and sort the array until pointer stops moving
    //like i start with 4 and put it in 3rd index and then from third index i jump to 7th index
    //but this method has flaw what if array is already sorted
    //it only works if not a single elemt is at correct place
}


//This method uses o(n) space and memory it is inefficient for larger input
// int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
//    int i, count = 0;
//    int n[numsSize];

//     for(i=0; i<numsSize; i++) {
//         n[i] = 0;
//     }

//    for(i=0; i<numsSize; i++) {
//        n[nums[i]-1] = 1;
//    }
   
//    for(i=0; i<numsSize; i++) {
//         if (n[i] == 0) {
//             count++;
//         }
//     }

//     int b=0;
//     int *a = (int *)malloc(count*sizeof(int));
//     for(i=0; i<numsSize; i++) {
//         if (n[i] == 0) {
//             a[b++] = i+1;
//         }
//     }
//     *returnSize = count;
//     return a;
// }
