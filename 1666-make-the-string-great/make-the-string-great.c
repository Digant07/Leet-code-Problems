char* makeGood(char* s) {

    int len = strlen(s);
    int i, j = 0;

    for (i = 0; i < len; i++) {
       
        if (j >= 1 && abs(s[j - 1] - s[i]) == 32) {
   
            j--;
        } else {
           
            s[j++] = s[i];
        }
    }
    s[j] = '\0'; 
    return s;
}
