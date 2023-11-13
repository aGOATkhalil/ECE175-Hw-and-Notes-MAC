//
//  main.c
//  collatz_conjecture
//
//  Created by Khalil Gatto on 8/28/23.
//

#include <stdio.h>

int main() {
    long long n;
    int count = 1;
    
    scanf("%lld",&n);
    printf("%lld\t",n);
    
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
        ++count;
        /////////////////////////////////////
        if (count == 10)
        {
            printf("%lld\t\n",n);
            count = 0;
        }
        else if ((count != 10) && (n == 1))
        {
            printf("%lld\n",n);
        }
        else
        {
            printf("%lld\t",n);
        }
        
    }
    
    
    
    return 0;
}


