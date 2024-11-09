# Character Frequency Analysis

This program analyzes a given paragraph of text by counting the frequency of each alphabetic character. It then calculates the percentage of each character's occurrence relative to the total number of alphabetic characters in the text and displays the results in a sorted order from the most frequent to the least frequent character.

## Features

- **Character Counting**: Counts the frequency of each alphabetic character in the input text.
- **Sorting**: Sorts the characters alphabetically.
- **Percentage Calculation**: Calculates and displays the percentage of each character's frequency relative to the total number of alphabetic characters in the text.
- **Display Results**: Prints the character frequency and percentage.

## How to Use

1. **Clone or Download** the repository to your local machine.
2. **Compile** the program using a C compiler like `gcc`:
    ```bash
    gcc -o frequency_analysis frequency_analysis.c
    ```
3. **Run** the program:
    ```bash
    ./frequency_analysis
    ```
4. The program will ask you to enter a paragraph. Once entered, it will display:
    - The total character count.
    - The sorted list of characters by their frequency and percentage of occurrence.

## Example Usage

```bash
Enter your paragraph for analysis:
Hello, world! This is an example paragraph with repeated characters.
The total character count is: 62
Sorted String:  !!,HHSTWabcddeeegilmnoprsssstttwwyy
Character frequencies and percentages:
'e' = 9 (14.52%)
't' = 6 (9.68%)
's' = 5 (8.06%)
'o' = 4 (6.45%)
'r' = 4 (6.45%)
' ' = 4 (6.45%)
...
