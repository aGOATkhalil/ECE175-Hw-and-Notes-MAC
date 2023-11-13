//
//  main.c
//  actiivty_class_sept12
//
//  Created by Khalil Gatto on 9/12/23.
//

#include <stdio.h>

int main() {

    double avg, max, sum, num, current_val;
    int count;
    
    
    avg = 0;
    max = 0;
    sum = 0;
    count = 0;
    num = 0;
        
    
    while ((num >= 0) && (num <= 100))
    {
        printf("Enter a number 0-100: ");
        scanf("%lf",&num);
        
        if ((num >= 0) && (num <= 100))
        {
            sum += num;
            count++;
            current_val = num;
        }
        
        if (current_val > max)
        {
            max = current_val;
        }
        
        
    }
    
    avg = sum / count;
    
    printf("Average: %.1lf\n", avg);
    printf("Sum: %.1lf\n", sum);
    printf("Max: %.1lf\n", max);
    
    /*
 
     
     declare avg, max, sum
     declare num to receive a number
     declare count
     initialize above variables to 0

     while(num >= 0 && num <= 100)
     {
     print enter a number 0-100
     scanf to get num

     if(num 0-100) //so that invalid numbers are not inclueded in data
     {
     find sum 'accumulate'
     increment count by 1

     find max
     if(current num > max){
     max = num;
     }
     display all answers
    

     
     */
    
    return 0;
    
}
