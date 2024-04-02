#include <stdlib.h>
#include <string.h>

char* keypad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

char** letterCombinations(char* digits, int* returnSize) {
    if (digits == NULL || strlen(digits) == 0) {
        *returnSize = 0;
        return NULL;
    }

    int numDigits = strlen(digits);
    *returnSize = 1;

    // Calculate total number of combinations
    for (int i = 0; i < numDigits; ++i) {
        int digit = digits[i] - '0';
        *returnSize *= strlen(keypad[digit]);
    }

    // Allocate memory for result
    char** result = (char**)malloc((*returnSize) * sizeof(char*));
    for (int i = 0; i < *returnSize; ++i) {
        result[i] = (char*)malloc((numDigits + 1) * sizeof(char));
    }

    // Generate combinations
    for (int i = 0; i < *returnSize; ++i) {
        int index = i;
        for (int j = 0; j < numDigits; ++j) {
            int digit = digits[j] - '0';
            int keyLen = strlen(keypad[digit]);
            result[i][j] = keypad[digit][index % keyLen];
            index /= keyLen;
        }
        result[i][numDigits] = '\0';
    }

    return result;
    free(result);
}
