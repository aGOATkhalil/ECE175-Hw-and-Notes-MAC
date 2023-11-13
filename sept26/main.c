//
//  main.c
//  sept26
//
//  Created by Khalil Gatto on 9/26/23.
//

#include <stdio.h>

void sum_avg(double z1, double z2, double z3,double *sumz, double *avgz)
{
    *sumz = z1 + z2 + z3;
    *avgz = *sumz / 3;
}

int main(void)
{
    
    double z1, z2, z3, sumz, avgz;
    printf("Enter 3 numbers: ");
    scanf("%lf%lf%lf", &z1, &z2, &z3);
    
    sum_avg(z1, z2, z3, &sumz, &avgz);
    
    printf("sum and average are %.2lf, %.2lf\n", sumz, avgz);
    

    /*MARK: Pointers
        
     Returns more than one ouptut. It keeps the address of another one.
     
     */

    //Declaring pointers
    /*
     int *p;
     int i;
     p = &i; //& is the reference operator. Sets the pointer == to the address of another variable.
     
     i  = 10;
     printf("i: %d\n",i);
     printf("P: %d\n",p);
     
     *p = 175;
     printf("\ni: %d\n",i);
     printf("P: %p\n",&i);

     */
    
    
    return 0;

}
