/*
Date - 5/oct/2026
Problem Link - https://leetcode.com/problems/defanging-an-ip-address/

Problem Statement
1108. Defanging an IP Address
Solved
Easy
Topics
premium lock icon
Companies
Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".

 

Example 1:

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
Example 2:

Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"
 

Constraints:

The given address is a valid IPv4 address.

*/

//Code 


char * defangIPaddr(char * address){
    char *str = (char *)malloc( (strlen(address)+7)*sizeof(char));
    int i, index = 0;

    for (i=0; address[i] != '\0'; i++) {
        if (address[i] == '.'){
            str[index++] = '[';
            str[index++] = '.';
            str[index++] = ']';
        }
        else{
            str[index++] = address[i];
        }
    }
    str[index] = '\0';

    return str;
}
