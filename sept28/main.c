//
//  main.c
//  sept28
//
//  Created by Khalil Gatto on 9/28/23.
//

#include <stdio.h>

void read_fraction(int *p_num, int *p_den);
int gcd(int x, int y);
void add_fractions(int n1, int d1, int n2, int d2, int *p_n, int *p_d);
void multiply_fractions(int n1, int d1, int n2, int d2, int *p_n, int *p_d);
void reduce_fractions(int *p_n, int *p_d);
void print_fractions(int n, int d);


int main()
{
    int n1, d1, n2, d2, n, d;
    int *p_n;
    int *p_d;
    int *p_num;
    int *p_den;
    char op;
    
    /*
     create a common fraction calculator
     
     (n1/d1) op (n2/d2) = result
     
     */

    read_fraction(&n1, &d1);
    
    
    
    printf("Operation? ( + , - , * , / ):  ");
    scanf("%c", &op);
    
    printf("Enter the numerator and denominator for the first fraction (numerator, denominator): ");
    scanf("%d%d", &n2, &d2);
    
    switch (op)
    {

    case '+': // call a function here
            
      add_fractions(n1, d1, n2, d2,  &n,  &d);
      break;

    case '-': // call a function here
      add_fractions(n1,  d1,  -n2,  d2, &n,  &d);
      break;

    case '*': // call a function here
      multiply_fractions(n1, d1, n2, d2, &n,  &d);
      break;

    case '/': // call a function here
      multiply_fractions(n1, d1, n2, d2, &n,  &d);
      break;

    default:

      printf("This is not a valid operator");
    }
    
    print_fractions(n,d);
    
    
    printf("\n");
    return 0;
}

void read_fraction(int *p_num, int *p_den)
{

    printf("Enter the numerator and denominator for the first fraction (numerator, denominator): ");
    scanf("%d%d", p_num, p_den);
    
}

void add_fractions(int n1, int d1, int n2, int d2, int *p_n, int *p_d)
{
    *p_n = n1 * d2 + n2 * d1;
    *p_d = d1 * d2;
}

void multiply_fractions(int n1, int d1, int n2, int d2, int *p_n, int *p_d)
{
    *p_n = n1 * n2;
    *p_d = d1 * d2;
}

int gcd(int x, int y)
{
  int rem = 1, gcd;
  while (rem != 0) {
    if (y == 0) {
      gcd = x;
      rem = 0;
    }

    else {
      gcd = y;
      rem = x % y;
      x = y;
      y = rem;
    }
  }
  return gcd;
}


void print_fractions(int n, int d)
{
  if (n == 0)
    printf("0");
  else if (d == 0)
    printf("NaN");
  else if (d == 1)
    printf("%d", n);
  else
    printf("%d/%d", n, d);
}
