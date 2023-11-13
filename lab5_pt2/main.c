//
//  main.c
//  lab5_pt2
//
//  Created by Khalil Gatto on 9/29/23.
//


#include <stdio.h>

void credit(int quarter, int dime, int nickel, int penny, int *dollars, int *cents)
{
 
    int total = 0;
    int quarter_conv, dime_conv, nickel_conv, penny_conv;

    /*
     
     Conversions are in the name of dollars.
     Quarter = 0.25
     Dime = 0.10
     Nickel = 0.05
     Penny = 0.01
     
     Dollars should be the the addition where cents is the remainder.
     
     INP = 14 12 25 131
     Dollars = 7.26
     
     */
    
    quarter_conv = 25;
    dime_conv = 10;
    nickel_conv = 5;
    penny_conv = 1;
    
    total = (quarter_conv) * (quarter) + (dime_conv) * (dime) + (nickel_conv) * (nickel) + (penny_conv) * penny;
    
    *dollars = total / 100;
    *cents = total % 100;
    
}

int main()
{
    int quarter, dime, nickel, penny;
    int *dollars;
    int *cents;
    
    char continue_inp = 'y';
    
    while (continue_inp == 'y')
    {
        printf("Enter coins info (quarter, dime, nicke, penny): ");
        scanf("%d%d%d%d", &quarter, &dime, &nickel, &penny);
        
        credit(quarter, dime, nickel, penny, &dollars, &cents);
        
        printf("Coin credit: \n");
        
        printf("Dollars: %d\n", dollars);
        printf("Cents: %d\n", cents);
        
        printf("Do you want to continue? (y or n): ");
        scanf("%*c%c", &continue_inp);
        
//        if (continue_inp == 'y')
//        {
//            continue;
//        }
//        else
//        {
//            break;
//        }
        
    }

    
    
    return 0;
}
