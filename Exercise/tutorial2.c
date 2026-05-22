#include <stdio.h>
#include <string.h>

#define MAX 51   //50 characters + 1 for null terminator

int main() {
    //variables for book titles
    char title1 [MAX];
    char copiedTitle[MAX];
    char title2 [MAX];

    //variables for tokenization
    char temp1[MAX];
    char temp2[MAX];

    //variables for word counting and longest word
    char *token;
    int wordcount;

    char longestword[MAX];

    printf("======= University Library Book Data =======\n\n");
    //prompt librarian to enter the first book title
    printf("Enter the first book title: ");
    fgets(title1, sizeof(title1), stdin);

    //remove newline character using strcspn()
    title1[strcspn(title1, "\n")] = '\0';

    //validate input is not empty
    if (strlen(title1) == 0) {
        printf("Error: Book title cannot be empty.\n");
        return 1;
    }

    //display length of the first title
    printf("\nLength of the first book title: %lu characters\n",
           strlen(title1));

    //copy title using strcpy()
    strcpy(copiedTitle, title1);

    //display original and copied titles
    printf("\nOriginal Title: %s\n", title1);
    printf("Copied Title  : %s\n", copiedTitle);

    //prompt librarian to enter second book title
    printf("\nEnter the second book title: ");
    fgets(title2, sizeof(title2), stdin);

    //remove newline character
    title2[strcspn(title2, "\n")] = '\0';

    //validate input is not empty
    if (strlen(title2) == 0) {
        printf("Error: Second book title cannot be empty.\n");
        return 1;
    }

    //compare both titles using strcmp()
    
    int compare = strcmp(title1, title2);

    printf("\nComparison Result:\n");

    if (compare == 0) {
        printf("Both titles are equal.\n");
    } else if (compare > 0) {
        printf("The first title is lexicographically greater than the second title.\n");
    } else {
        printf("The first title is lexicographically smaller than the second title.\n");
    }

    //process first title using strtok()

    //copy original title before tokenization
    strcpy(temp1, title1);

    wordcount = 0;
    longestword [0] = '\0';

    token = strtok(temp1
        , " ");

    while (token != NULL) {
        wordcount++;

        //check for longest word
        if (strlen(token) > strlen(longestword)) {
            strcpy(longestword, token);
        }

        token = strtok(NULL, " ");
    }

    //display results for first title
    printf("\n--- First Book Title Analysis ---\n");
    printf("Title: %s\n", title1);
    printf("Total Words: %d\n", wordcount);
    printf("Longest Word: %s\n", longestword);

    //process second title using strtok()

    //copy original title before tokenization
    strcpy(temp2, title2);

    wordcount = 0;
    longestword [0] = '\0';

    token = strtok(temp2, " ");

    while (token != NULL) {
        wordcount++;

        //check for longest word
        if (strlen(token) > strlen(longestword)) {
            strcpy(longestword, token);
        }

        token = strtok(NULL, " ");
    }

    //display results for second title
    printf("\n--- Second Book Title Analysis ---\n");
    printf("Title: %s\n", title2);
    printf("Total Words: %d\n", wordcount);
    printf("Longest Word: %s\n", longestword);

    return 0;
}
