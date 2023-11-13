//
//  main.c
//  lab8_pt1
//
//  Created by Khalil Gatto on 10/27/23.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countOccurrences(const char* lString, const char* sString) {
    int count = 0;
    const char* position = lString;

    while ((position = strstr(position, sString)) != NULL)
    {
        count++;
        position += strlen(sString);
    }

    return count;
}


int main() {
    char lString[50];
    char sString[10];

    printf("Enter a long string: ");
    scanf(" %49[^\n]", lString);
    printf("Enter a short string: ");
    scanf(" %9s[^\n]", sString);

    int occur = countOccurrences(lString, sString);

    if (occur > 0)
    {
        printf("%s occurs %d times\n", sString, occur);
    }
    else
    {
        printf("No %s found\n", sString);
    }

    return 0;
}
