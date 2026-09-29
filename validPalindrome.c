bool isPalindrome(char* s) {
    int i = 0;
    int j = strlen(s) - 1;
    
    /*
    In this we have checked if the input is pllaindrome or not by two pointers method.
    Algorithm
    s1 - put i value to first index and j value to last index of s string
    s2 - run a loop till when i < j. if i==j then it is already palindrome
    s3 - we have checked if current i or j index character is alphanumeric or not.
        if current character of i, j is not alphanumeric then we move on to alphanumeric 
        character to find to compare the two character
    s4 - compare both indices charcacter if not same then word is not palindrome
        if same then move on to next elements until loop runs. if whole loop runs then string is plaindrome.
    */


    while (i < j) {
        if (!isalnum(s[i]))
            i++;
        else if (!isalnum(s[j]))
            j--;
        else if ( tolower(s[i]) != tolower(s[j]) )
            return false;
        else {
            i++;
            j--;
        }
    }
    
    return true;    
}
