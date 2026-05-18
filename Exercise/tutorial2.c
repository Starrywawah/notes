#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 51   // 50 characters + 1 for null terminator

int main() {
    // Variables for book titles
    char firstTitle[MAX_LENGTH];
    char copiedTitle[MAX_LENGTH];
    char secondTitle[MAX_LENGTH];

    // Variables for tokenization
    char tempFirst[MAX_LENGTH];
    char tempSecond[MAX_LENGTH];

    // Variables for word counting and longest word
    char *token;
    int wordCount;

    char longestWord[MAX_LENGTH];

    // TASK 1: Prompt librarian to enter the first book title
    printf("Enter the first book title: ");
    fgets(firstTitle, sizeof(firstTitle), stdin);

    // Remove newline character using strcspn()
    firstTitle[strcspn(firstTitle, "\n")] = '\0';

    // Validate input is not empty
    if (strlen(firstTitle) == 0) {
        printf("Error: Book title cannot be empty.\n");
        return 1;
    }

    // TASK 2 & 3: Display length of the first title
    printf("\nLength of the first book title: %lu characters\n",
           strlen(firstTitle));

    // TASK 4: Copy title using strcpy()
    strcpy(copiedTitle, firstTitle);

    // TASK 5: Display original and copied titles
    printf("\nOriginal Title: %s\n", firstTitle);
    printf("Copied Title  : %s\n", copiedTitle);

    // TASK 6: Prompt librarian to enter second book title
    printf("\nEnter the second book title: ");
    fgets(secondTitle, sizeof(secondTitle), stdin);

    // Remove newline character
    secondTitle[strcspn(secondTitle, "\n")] = '\0';

    // Validate input is not empty
    if (strlen(secondTitle) == 0) {
        printf("Error: Second book title cannot be empty.\n");
        return 1;
    }

    // TASK 7 & 8: Compare both titles using strcmp()
    
    int compareResult = strcmp(firstTitle, secondTitle);

    printf("\nComparison Result:\n");

    if (compareResult == 0) {
        printf("Both titles are equal.\n");
    } else if (compareResult > 0) {
        printf("The first title is lexicographically greater than the second title.\n");
    } else {
        printf("The first title is lexicographically smaller than the second title.\n");
    }

    // TASK 9 & 10: Process first title using strtok()

    // Copy original title before tokenization
    strcpy(tempFirst, firstTitle);

    wordCount = 0;
    longestWord[0] = '\0';

    token = strtok(tempFirst, " ");

    while (token != NULL) {
        wordCount++;

        // Check for longest word
        if (strlen(token) > strlen(longestWord)) {
            strcpy(longestWord, token);
        }

        token = strtok(NULL, " ");
    }

    // Display results for first title
    printf("\n--- First Book Title Analysis ---\n");
    printf("Title: %s\n", firstTitle);
    printf("Total Words: %d\n", wordCount);
    printf("Longest Word: %s\n", longestWord);

    // TASK 9 & 10: Process second title using strtok()

    // Copy original title before tokenization
    strcpy(tempSecond, secondTitle);

    wordCount = 0;
    longestWord[0] = '\0';

    token = strtok(tempSecond, " ");

    while (token != NULL) {
        wordCount++;

        // Check for longest word
        if (strlen(token) > strlen(longestWord)) {
            strcpy(longestWord, token);
        }

        token = strtok(NULL, " ");
    }

    // Display results for second title
    printf("\n--- Second Book Title Analysis ---\n");
    printf("Title: %s\n", secondTitle);
    printf("Total Words: %d\n", wordCount);
    printf("Longest Word: %s\n", longestWord);

    return 0;
}
