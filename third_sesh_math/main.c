//
//  main.c
//  third_sesh_math
//
//  Created by Khalil Gatto on 8/29/23.
//

#include <stdio.h>
#include <math.h>


int main() {
    
    //Activity.
    
    float a;
    float b;
    float c;
    float x1;
    float x2;
    
    
    printf("Input a =  ");
    scanf("%f", &a);
    
    printf("Input b =  ");
    scanf("%f", &b);
    
    printf("Input c =  ");
    scanf("%f", &c);
    
    
    x1 = (-1 * b + sqrt(b*b - 4*a*c)) / (2*a);
    x2 = (-1 * b - sqrt(b*b - 4*a*c)) / (2*a);
    
    printf("Roots: %f, %f\n", x1,x2); //imaginary roots do not work.
    
    

    return 0;
}
