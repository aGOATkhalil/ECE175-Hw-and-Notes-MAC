//
//  main.c
//  random_shit
//
//  Created by Khalil Gatto on 9/8/23.
//


#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int enteredAge;
    
    scanf("%d", &enteredAge);
    
    while (enteredAge < 15 || enteredAge > 35) {
        if (enteredAge < 15) {
            printf("Too young\n");
        }
        else {
            printf("Grown up\n");
        }
        scanf("%d", &enteredAge);
    }
    
    printf("Perfect match");
    
    return 0;
}
