//
//  main.c
//  sept14Notes
//
//  Created by Khalil Gatto on 9/14/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
    //Write do statements.
    
    int i = 1;
    
    do {
        i = i*2;
        
    } while (i <= 5);
    
    printf("i = %d\n",i);
    
    /*
     Activity 6
     
     OUTPUT:
     START
        loop1 = 1
     END
     
     
     */
    
    
    
    /*
     
     b// ECE 175 Code to share
     
     to find maximum, total sum, and average of all entered numbers. Your program continues accepting the entered numbers as long as the entered values are between
     and 100.
     
     

     Inputs: number(s)
     Outputs: max, sum, average
     
     Algorithm:
     initialize num = 0 (so that it can get into the loop)
     initialize average, max to 0, sum to 0
     Initialize count to 0
     Declare userChar and set it to any 'char'
     
     
     while (num is not 'q'){
     
       let a user enter num
       increment count by 1
       sum = sum + num;
     
       if(num > max)
            max = num;
            print "continue? (q to quit)"
            get user to enter char
            
       }
     }
     
     If count == 0
         display a statement “no number between 0-100 is entered”
     else
     {
         find average = sum/count
         display max
         display sum and average

     }
     
     */
    
    
    double avg, max, sum, num, current_val;
    int count;
    char userChar;
    
    userChar = 'a';
    avg = 0;
    max = 0;
    sum = 0;
    count = 0;
    num = 0;
        
    
    while (userChar != 'q')
    {
        printf("Enter a number: ");
        scanf("%lf",&num);
        
        sum += num;
        count++;
        current_val = num;
    
        if (current_val > max)
        {
            max = current_val;
        }
        printf("Press 'q' to quit. Else press anything: ");
        scanf("%*c%c", &userChar); //See if " %c" works instead after.
        
    }
    
    avg = sum / count;
    
    printf("Average: %.1lf\n", avg);
    printf("Sum: %.1lf\n", sum);
    printf("Max: %.1lf\n", max);
    
    
    
    /*
     ACTIIVTY 7
     
     i j OUTPUT
     1 0 1A
     1 1 1B
     1 2 1C
     
     
     */
    
    
    
    return 0;
}
