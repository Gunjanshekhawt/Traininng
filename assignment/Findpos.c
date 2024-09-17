#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000
#define MAX_LINES 100

void searchInLines(char lines[MAX_LINES][MAX_LINE_LENGTH], int n, char searchChar, const char *searchWord) {
    for (int i = 0; i < n; i++) {
        char *charPos = strchr(lines[i], searchChar);
        char *wordPos = strstr(lines[i], searchWord);

        printf("Line %d:\n", i + 1);

        if (charPos != NULL) {
            printf("  Character '%c' found at position: %ld\n", searchChar, (charPos - lines[i]));
        } else {
            printf("  Character '%c' not found\n", searchChar);
        }

        if (wordPos != NULL) {
            printf("  Word '%s' found at position: %ld\n", searchWord, (wordPos - lines[i]));
        } else {
            printf("  Word '%s' not found\n", searchWord);
        }
    }
}

int main() {
    int n;
    char searchChar;
    char searchWord[MAX_LINE_LENGTH];
    char lines[MAX_LINES][MAX_LINE_LENGTH];

    printf("Enter the number of lines: ");
    scanf("%d", &n);
    getchar(); 


    // Read lines of input
    printf("Enter %d lines of text:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(lines[i], MAX_LINE_LENGTH, stdin);
    }
    
    printf("Enter the character to search for: ");
    scanf("%c", &searchChar);
    getchar(); 

    printf("Enter the word to search for: ");
    fgets(searchWord, MAX_LINE_LENGTH, stdin);
    size_t len = strlen(searchWord);
    if (len > 0 && searchWord[len - 1] == '\n') {
        searchWord[len - 1] = '\0';
    }

    searchInLines(lines, n, searchChar, searchWord);

    return 0;
}

