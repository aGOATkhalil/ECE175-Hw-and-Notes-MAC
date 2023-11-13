//
//  main.c
//  class_activity_wk3
//
//  Created by Khalil Gatto on 9/7/23.
//

#include <stdio.h>

int main() {
    
    double luggage_weight;
    double cost;
    char class;
    
    
    printf("Enter luggage weight: ");
    scanf("%lf", &luggage_weight);
    
    printf("\nEnter Passenger Class (E for economy, V for VIP): ");
    scanf("%*c%c", &class);

    
    if ((luggage_weight >= 25) && (class == 'E'))
    {
        cost = (luggage_weight - 25) * 1.50;
    }
    else if ((luggage_weight <= 25) && (class == 'E'))
    {
        cost = 0;
    
    }
    else if ((luggage_weight >= 60) && (class == 'V'))
    {
        cost = 30;
    }
    else if ((luggage_weight <= 60) && (class == 'V'))
    {
        cost = 0;
    }
    else
    {
        printf("\nhuh??");
    }
    
    printf("\n$%.2lf\n", cost);
    
    
    
    return 0;
}
