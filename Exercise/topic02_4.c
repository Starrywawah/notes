//01
#include <stdio.h>
#include <string.h>

int main(){
  char str[100];
  char copy[100];

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  str[strcspn(str, "\n")] = '\0';

  printf("Length of \"%s\" = %lu\n", str, strlen(str));

  strcpy(copy, str);

  printf("Original string: %s\n", str);
  printf("Copied string: %s\n", copy);

  return 0;
}

//02
#include <stdio.h>
#include <string.h>

int main() {
    char str1[200];
    char str2[100];
    int result;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    strcat(str1, str2);

    printf("\nConcatenated string: %s\n", str1);

    result = strcmp(str1, str2);

    if (result == 0) {
        printf("Both strings are equal.\n");
    } else if (result > 0) {
        printf("%s is lexicographically greater than %s\n", str1, str2);
    } else {
        printf("%s is lexicographically smaller than %s\n", str1, str2);
    }

    return 0;
}

//03
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[201];
    char *word;
    int total = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    word = strtok(sentence, " ");

    while (word != NULL) {
        int vowels = 0, consonants = 0;

        for (int i = 0; word[i] != '\0'; i++) {
            char ch = word[i];

            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + 32;
            }

            if ((ch >= 'a' && ch <= 'z')) {

                if (ch == 'a' || ch == 'e' || ch == 'i' ||
                    ch == 'o' || ch == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }

        printf("Word: %s -> Vowels: %d, Consonants: %d\n",
               word, vowels, consonants);

        total++;

        word = strtok(NULL, " ");
    }

    printf("\nTotal words: %d\n", total);

    return 0;
}
