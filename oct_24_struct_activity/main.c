//
//  main.c
//  oct_24_struct_activity
//
//  Created by Khalil Gatto on 10/24/23.
//

#include <stdio.h>
#include <string.h>

typedef struct city_struct{
    char name[20];
    char state[3];
    double population;
    double percent;
} city_t;


void scan_city(city_t *x, FILE *inp)
{
    fscanf(inp, "%s%s%lf%lf", x->name, x->state, &x->population, &x->percent);
}


int main(void)
{
    
    city_t CITY[10];
    FILE *inp = fopen("cities.txt", "r");
    
    
    if (inp == NULL)
    {
        printf("File not found\n");
        return 0;
    }
    else
    {
       
        for (int i = 0; i < 10; i++)
        {
            scan_city(&CITY[i], inp);
        }
        
        //use loop and call scan_city function to read
        //in info of city and keep in array CITY
    }

    printf("City with population growth > 15%% \n");
    
    for (int i = 0; i < 10; i++)
    {
        
        if (CITY[i].percent > 15)
        {
            printf("%s", CITY[i].name);
            printf("\n");
        }
        
    }
    
    
    printf("\n\nCities with state TX\n");
    
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(CITY[i].state, "TX") == 0)
        {
            printf("%s\n", CITY[i].name);
        }
    }
    return 0;
}
