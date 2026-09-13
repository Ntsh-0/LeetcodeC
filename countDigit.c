/*
An integer  is a divisor of an integer  if the remainder of n%d = 0
Given an integer, for each digit that makes up the integer determine whether it is a divisor. 
Count the number of divisors occurring within the integer.

Example: n = 124
Check whether 1,2 and 4 are divisors of 124. All 3 numbers divide evenly into 124 so return 3.
*/
#include <stdio.h>

//This function checks if its digit is divisor of the number
int isDivisor(int num, int dividend) {

    //The dividend != 0 staement at first ensures that there is no division by 0
    if ( dividend != 0 && !(num%dividend) ) 
        return 1;
    else
        return 0;
}

//This function counts the number of divisor the number have from its digits
int getDivisor(int num) {
    int count = 0;      //keeps track of how many divisors
    int temp = num;

    //loop for checking if its digits are its divisor using another function isDivisor()
    while (temp > 0) {
        if (isDivisor(num, temp%10))
            count++;
        temp = (int)(temp/10);
    }
    return count;
}

//main() function for taking input of the digits and display output
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Number of divisors are: %d", getDivisor(n));
    return 0;
}