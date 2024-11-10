#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>  


void slice(char *words) {
    system("clear");  
    printf("Enter your paragraph for analysis:\n");
    fgets(words, 1000, stdin);  
}


int count_characters(char *words) {
    int charCount = 0;
    for (int i = 0; words[i] != '\0'; i++) {
        if (isalpha(words[i])) { 
            charCount++;
        }
    }
    return charCount;
}


void sort_string(char *words) {
    int length = strlen(words);
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (words[j] > words[j + 1]) {
                char temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }
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


void caesar_cipher(char *words, int shift) {
    printf("Converting it to Caesar cipher:\n");
    for (int i = 0; words[i] != '\0'; i++) {
        if (isalpha(words[i])) {
            char offset = isupper(words[i]) ? 'A' : 'a';
            words[i] = ((words[i] - offset + shift) % 26) + offset;
        }
    }
    printf("Ciphered Text: %s\n", words);
}

int main() {
    char words[1000];
    int count_arr[256] = {0}; 

    slice(words);  
    int charCount = count_characters(words);  
    printf("The total alphabetic character count is: %d\n", charCount);  
    
    sort_string(words);
    printf("Sorted String: %s\n", words);

    frequency(words, count_arr);  
    percentage_conversion(count_arr, charCount);

  
    int shift = 3;
    caesar_cipher(words, shift);

    return 0;
}
