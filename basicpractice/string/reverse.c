#include <stdio.h>
#include <string.h>

#define MAX 50
int main() {
    
    char str[MAX] = "Hello, World!";
    char rev[MAX];
    int i,n;
    char temp;
    
    printf("Original String: %s\n", str);
     n = strlen(str); 
    
    strncpy(rev,str,n+1);
    

    for (i = 0; i < n / 2; i++) {
        temp = rev[i];
        rev[i] = rev[n - i - 1];
        rev[n - i - 1] = temp;
    }
    
    printf("Reversed String: %s\n", rev);
    
    return 0;
}


