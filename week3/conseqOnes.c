/*
Date - 21/oct/2026
Problem Link - https://leetcode.com/problems/three-consecutive-odds/?envType=problem-list-v2&envId=prshgx6i

Problem Statement
1550. Three Consecutive Odds
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.
 

Example 1:

Input: arr = [2,6,4,1]
Output: false
Explanation: There are no three consecutive odds.
Example 2:

Input: arr = [1,2,34,3,4,5,7,23,12]
Output: true
Explanation: [5,7,23] are three consecutive odds.
 

Constraints:

1 <= arr.length <= 1000
1 <= arr[i] <= 1000

*/

//Code 
bool threeConsecutiveOdds(int* arr, int arrSize) {
    int i, count = 0;

    for(i=0; i<arrSize; i++) {
        if (count > 2)
            return true;
        if (arr[i]%2 != 0)
            count++;
        else
            count = 0;
    }
    if (count > 2)
        return true;
    return false;
}
