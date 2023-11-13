//
//  main.c
//  activity_sept21
//
//  Created by Khalil Gatto on 9/21/23.
//

#include <stdio.h>
#include <math.h>


double series(double x, int n, int m)
{
    int i = 1;
    double y = 0;
    
    
    for (i = 1; i <= n; i++)
    {
        y = y + pow(i,m) * pow(x,i);
        printf("%.2lf\n", y);
    }
    
    return y;
}


int main()
{
    
    double x, y;
    int n,m; // n = num of terms. m = power
    
    printf("Enter x value: ");
    scanf("%lf", &x);
    
    printf("Enter n and m value: ");
    scanf("%d %d", &n, &m);
    
    y = series(x,n,m);
    printf("\n%.5lf\n",y);

    
    return 0;
}
