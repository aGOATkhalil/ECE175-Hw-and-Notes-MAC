//
//  main.c
//  fourth_sesh
//
//  Created by Khalil Gatto on 8/31/23.
//

#include <stdio.h>

int main(void) {
   //Activity 2. Fill in the blanks using the correct format so that values are displayed as shown on the 2nd column.
        
    
    int num1 = 125;
    printf("%d\n", num1);
    
    printf("%5d\n",num1);
    
    
    int num2 = -125;
    printf("%5d\n",num2);
    
    double num3 = 3.14159;
    printf("%.2lf\n",num3);
    
    printf("%.3lf\n",num3);
    
    printf("%5.1lf\n",num3);
    
    double num4 = -0.003;
    printf("%-9lf\n",num4);
    
    printf("%7lf\n",num4);
    
    double num5 = 0.006;
    printf("%-8lf\n", num5);
    
    printf("%.2lf\n", num5); //
    
    printf("%.1lf\n", num5);
    
    printf("\n");
    
    //Another activity.
    
    char first_letter;
    char second_letter;
    
    printf("Enter two lowercase letters: ");
    scanf("%c%c", &first_letter, &second_letter);
    
    printf("%c%c%c%c\n",first_letter, first_letter - 32, second_letter, second_letter - 32);
    
    //
    
    
    return 0;

}
