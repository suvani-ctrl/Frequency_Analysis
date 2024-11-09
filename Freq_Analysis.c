#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>  

void slice(char *words) {
    system("clear");  
    printf("Enter string/letters for analysis:\n");
    fgets(words, 1000, stdin);  
}

int count(char *words) {
    int charCount = 0;
    for (int i = 0; words[i] != '\0'; i++) {
        if (isalpha(words[i])) { 
            charCount++;
        }
    }
    return charCount;
}

char* sorting(char *words, int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (words[j] > words[j + 1]) {
                char temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }
    return words;  
}

void frequency(char *words, int *count) {
    for (int i = 0; words[i] != '\0'; i++) {
        if (isalpha(words[i])) {
            count[(unsigned char)words[i]]++;
        }
    }
}

void percentage_conversion(int *count, int total_chars) {
    printf("Character frequencies and percentages:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            double percentage = (count[i] / (double)total_chars) * 100;
            printf("'%c' = %d (%.2f%%)\n", i, count[i], percentage);
        }
      
    }
}

int main() {
    char words[1000];
    int count_arr[256] = {0}; 

    slice(words);  
    int charCount = count(words);  
    printf("The total character count is: %d\n", charCount);  
    
    int length = strlen(words);
    printf("Sorted String: %s\n", sorting(words, length));

    frequency(words, count_arr);  
    percentage_conversion(count_arr, charCount); 

    return 0;
} 
