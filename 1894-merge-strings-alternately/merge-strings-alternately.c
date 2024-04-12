

char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int mergedSize = len1 + len2 + 1;
    
    char* merged = (char*)malloc(mergedSize * sizeof(char));
    if (merged == NULL) {

        return NULL;
    }
    int i, j, k;
    for(i=0,j=0,k=0;i<strlen(word1)&&j<strlen(word2)&&k<mergedSize;i++,j++,k++){
        merged[k++]=word1[i];
        merged[k]=word2[j];
        
    }
    while (i < len1) {
        merged[k++] = word1[i++];
    }

    // Copy remaining characters from word2
    while (j < len2) {
        merged[k++] = word2[j++];
    }
    merged[k] = '\0';
    
    return merged;
}