/*
Date - 13/oct/2026
Problem Link - https://leetcode.com/problems/check-if-the-sentence-is-pangram/?envType=problem-list-v2&envId=prshgx6i

Problem Statement
1832. Check if the Sentence Is Pangram
Solved
Easy
Topics
premium lock icon
Companies
Hint
A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

 

Example 1:

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.
Example 2:

Input: sentence = "leetcode"
Output: false
 

Constraints:

1 <= sentence.length <= 1000
sentence consists of lowercase English letters

*/

//Code 

bool checkIfPangram(char* sentence) {
    //Creating a array for all alhpabet of english and setting freq of them to 0
    int alpha[26] = {0};
    int i, index;

    //checking if character is between a and z then giving it index. if any character is found giving it the value of 1 while other remains 0
    //z gets 0 index y get 1 index similarly a gets index 25;
    //saw it on google that to change in ascii we have to do (- '0').
    for(i=0; sentence[i] != '\0'; i++){
        char ch = sentence[i];
        if (ch >= 'a' && ch<='z') {
            index = ('z'-'0') - (ch-'0');
            alpha[index] = 1;
        }
    }

    //if there is any element of alpha[i] = 0 then false otherwise true
    for (i=0; i<26; i++){
        if (alpha[i] == 0){
            return false;
        }
    }

    return true;;
}
