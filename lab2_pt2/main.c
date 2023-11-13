//
//  main.c
//  lab2_pt2
//
//  Created by Khalil Gatto on 9/8/23.
//

/*
 
  Write a C program that finds the cost of transporting a luggage according
  to the table below.
 
  
  Sample code executions: bold entered by a user
  Enter your luggage weight (in lb): -2
  weight cannot be negative
  Enter your luggage weight (in lb): 12.5
  cost is $0.00
  Enter your luggage weight (in lb): 30
  cost is $7.50
  Enter your luggage weight (in lb): 40
  cost is $22.50
  Enter your luggage weight (in lb): 50
  cost is $42.50
  Enter your luggage weight (in lb): 65.5
  cost is $73.50
  
  
  */
 


#include <stdio.h>

int main()
{
    
    double weight, cost1, cost2, extra_weight, extra_weight_1, extra_weight_2, total_cost;
    
    printf("Enter your luggage weight (in lb): ");
    scanf("%lf", &weight);
    
    if (weight > 0)
    {
        if (weight <= 25)
        {
            cost1 = 0;
        }
        else if ((weight > 25) && (weight <= 40))
        {
            extra_weight = weight - 25;
            cost1 = 1.5 * extra_weight;
        }
        else if (weight > 40)
        {
            cost1 = 1.5 * 15;
            extra_weight_2 = weight - 40;
            cost2 = 2 * extra_weight_2;
        }
        
        total_cost = cost1 + cost2;
        printf("cost is $%.2lf\n", total_cost);
    }
    else
    {
        printf("Weight cannot be negative");
    }

    
    
    return 0;
}
