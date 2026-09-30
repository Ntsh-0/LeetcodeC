bool canConstruct(char* ransomNote, char* magazine) {
    /*
    m1- brute force - complexity O(n*m)
        s1- run a loop till length of ransom note.
        s2- in loop scan the entire magazine for the character if found replace the character   
            with '_' and continue the next iteration. if not found then return False
        s3- if outer loop ends return True

    */
    int i,j;

    for (i=0; ransomNote[i] != '\0'; i++) {
        int found = 0;
        
        for (j=0; magazine[j] != '\0'; j++) {
            if (ransomNote[i] == magazine[j]){
                magazine[j] = '_';
                found = 1;
                break;
            }
        }
        if (found == 0)
            return false;
    }
    return true;
}
