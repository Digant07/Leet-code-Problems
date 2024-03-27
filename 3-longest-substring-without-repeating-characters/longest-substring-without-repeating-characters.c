
int lengthOfLongestSubstring(char* s) {
    int maxcount = 0; // This will store the length of the longest substring without repeating characters
    int count = 0; // This will track the length of the current substring without repeating characters
    int lastOccurrence[256]; // An array to keep track of the index of the last occurrence of each character
    
    // Initialize the 'lastOccurrence' array to -1, indicating that no character has been seen yet
    for (int i = 0; i < 256; i++) {
        lastOccurrence[i] = -1;
    }
    
    // Loop through each character in the string until we reach the end ('\0' character)
    for (int i = 0; s[i] != '\0'; i++) {
        // Find the position of the last occurrence of the current character
        int lastPos = lastOccurrence[s[i]];
        
        // If the current character has been seen before in the current substring
        // and it's within the current substring's range
        if (lastPos != -1 && i - lastPos <= count) {
            count = i - lastPos; // Update the length of the current substring
        } else {
            count++; // Increase the length of the current substring
        }
        
        lastOccurrence[s[i]] = i; // Update the index of the last occurrence of the current character
        
        // Update the length of the longest substring encountered so far
        if (count > maxcount) {
            maxcount = count;
        }
    }
    
    // Return the length of the longest substring without repeating characters
    return maxcount;
}
