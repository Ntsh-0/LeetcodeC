int lengthOfLastWord(char* s) {
    int i, count = 0;
    
    //program works fine for words that have multiple words and does not have trailing spaces
    //p1- single words
    //p2- leading and trailing whitespaces

//     for (i = 0; s[i] != '\0'; i++) {
//         if (s[i] == ' ') {
//             count = temp;
//             temp = 0;
//         }
//         else{
//             temp++;
//         }
//     }
//     return  count;
// }

//new method hint from ai
//we first count the length of string 
//then we check if there are any whitespaces from the end and if there are then we move on to the last letter
//then we move letter by letter from last word till we found the ' '(empty space) and count the times we move and that count is the length of the last word
    for (i =0; s[i] != '\0'; i++);
    i--;
    while (s[i] == ' '){
        i--;
    }
    while (i>=0 && s[i] != ' '){
        count++;
        i--;
    }
    return count;
}
