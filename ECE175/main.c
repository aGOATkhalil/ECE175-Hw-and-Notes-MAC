//
//  main.c
//  ECE175
//
//  Created by Khalil Gatto on 8/24/23.
//
//
 #include <stdio.h>

int main()
{
    int a = 14;
    int b = 4;
    double x = 2.0;
    double y = 15;
    double z = y * x - a /(b + 10);
    printf("z is: %lf\n",z);

    
    // for num 2
    
    /*format options include
    
    char = %c
    int = %d
    float = %f
    double = %lf
     
     
     */
    
    int x_1b, y_1b;
    x = (40+9) / (3+4);
    y_1b = (40 + 9) / (3+4);
    
    
    int x_1c,y_1c;
    end activity 2


    //begin activity 3... create fahrenheit to celsius

    double input_temp;
    printf("Input tempreature (F): ");
    scanf("%lf",&input_temp);

    double celcius = (-32+input_temp)*5 / (9);
    printf("Temperature in celscius = %lf\n",celcius);


    //begin COLLATZ conjecture

    int n;
    printf("input integer (n): ");
    scanf("%d",&n);
    while (n != 1)
    {
        if (n%2 == 0)
        {
            n = n/2;
        }
        else if (n%2 == 1)
        {
            n = 3*n + 1;
        }
        printf("%d\n",n);
    }

  return 0;
    
}
