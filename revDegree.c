int reverseDegree(char* s) {
    //doing it using ASCII values by maths
    
    int p = 0;

    for(int i=0; s[i] != '\0'; i++) {
        p += (123 - (int)s[i]) * (i+1);
    }
    return p;
}
