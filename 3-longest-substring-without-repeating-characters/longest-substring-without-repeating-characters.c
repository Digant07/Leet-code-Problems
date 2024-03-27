
int lengthOfLongestSubstring(char* s) {
    int maxcount = 0; 
    int count = 0; 
    int lastOccurrence[256];
    for (int i = 0; i < 256; i++) {
        lastOccurrence[i] = -1;
    }
    
    
    for (int i = 0; s[i] != '\0'; i++) {
        
        int lastPos = lastOccurrence[s[i]];
        
        if (lastPos != -1 && i - lastPos <= count) {
            count = i - lastPos; 
        } else{
            count++;
        }
        
        lastOccurrence[s[i]] = i; 
        
      if (count > maxcount) {
            maxcount = count;
        }
    }
    
  
    return maxcount;
}
