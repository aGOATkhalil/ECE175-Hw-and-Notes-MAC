//
//  main.c
//  third_session
//
//  Created by Khalil Gatto on 8/29/23.
//


/*
 
Data types
 
 char == 8 bits [-127, 127]
 unsigned char == 8 bits [0,255]
 signed char == 8 bits [-127,127]
 int == 16 or 32 bits [-32767, 32767]
 unsigned int == 16 or 32 bits [0,65353]
 signed int == 16 or 32 bits [same as int]
 short int == 16 bits [-32767, 32767]
 unsigned short int == 16 bits [same as short int]
 long int == 32 bits [-2147438647, 2147438647]
 long long int == 64 bits [-(2^63 - 1), 2^63 - 1]
 signed long int == 32 bits [same as long int]
 unsigned long int == 32 bits [0, 4294967295]
 unsigned long long int == 64 bits [2^64 - 1]
 float == 32 bits [1^-37, 1^37]
 double == 64 bits [same as float]
 long double == 80 bits [same as double]
 
 
 */


#include <stdio.h>

int main()
{
    //Activity 1. Write program and algorithm.
    
    double radius_base;
    double height_container;
    double cost_per_area;
    int num_containers;
    double pi = 3.141593;
    
    
    printf("Radius of base (cm) =  ");
    scanf("%lf", &radius_base);
    
    printf("Height of container (cm) =  ");
    scanf("%lf", &height_container);
    
    
    printf("Cost of materials ($/cm^2) = ");
    scanf("%lf", &cost_per_area);
    
    printf("Number of containers (integer) =  ");
    scanf("%d",&num_containers);
    
    
    double surface_area = 2*pi*radius_base*height_container + pi*radius_base*radius_base;
    double cost = cost_per_area * num_containers * surface_area;
    
    printf("Surface area (cm^2) = %.2lf cm^2\n", surface_area);
    printf("Total cost ($) = $ %.2lf\n", cost);
    
    
    return 0;
    
}
