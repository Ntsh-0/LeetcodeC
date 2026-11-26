/*
Date - 5/nov/2026
Problem Link - https://leetcode.com/problems/container-with-most-water/submissions/2189404553/

Problem Statement
11. Container With Most Water
Solved
Medium
Topics
premium lock icon
Companies
Hint
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

 

Example 1:


Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
Example 2:

Input: height = [1,1]
Output: 1
 

Constraints:

n == height.length
2 <= n <= 105
0 <= height[i] <= 104

*/

//Code 
int maxArea(int* height, int heightSize) {
    int i=0, j=heightSize-1;
    int max = 0, temp;

    while(i<j) {
        if (height[i] > height[j]) {
            temp = height[j] * (j-i);
            j--;
        }
        else {
            temp = height[i] * (j-i);
            i++;
        }
        
        if (temp > max)
            max = temp;
    }
    
    return max;
}
