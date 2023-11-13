//
//  main.c
//  struct_notes
//
//  Created by Khalil Gatto on 10/24/23.
//




/*
 
#include <stdio.h>
#include <math.h>

typedef struct location_struct{
    int x;
    int y;
    int z;
}Location;


double dist(Location *pc1, Location *pc2)
{
    double distance;
    distance = sqrt( pow(pc2->x - pc1->x,2) + pow(pc2->y - pc1->y,2) + pow(pc2->z - pc1->z,2) );
    return distance;
    
}

int main(void){
    Location coord1, coord2;
    Location origin = {0,0,0};
    Location *pcord2;

    double distance;
    
    printf("Enter coordinate 1 [x y z]: ");
    scanf("%d%d%d", &coord1.x, &coord1.y, &coord1.z);
    printf("Enter coordinate 2 [x y z]: ");
    scanf("%d%d%d",  &coord2.x, &coord2.y, &coord2.z);
    distance = dist(&coord1,&origin);
    printf("distance of (%d,%d,%d) from origin is %.4lf\n", coord1.x, coord1.y, coord1.z, distance);
    pcord2 = &coord2; //write below using pcord2
    distance = dist(&coord2,&origin);
    printf("distance between 2 locations is %.4lf\n", distance);
    
    return 0;
}


*/















/*
 

typedef struct planet_struct{
    char name[20]; // name of the planet
    double diameter; // diameter of the planet in km
    int moons; // number of moon
    double orbit_time; // orbit around the sun in years
    double rotation_time; // orbit around
} planet;


void scan_planet(planet *plnp)
{
    printf("Enter the name of the planet:");
    scanf("%s", (*plnp).name);
    printf("Enter the diameter of the planet in Km:");
    scanf("%lf", &(*plnp).diameter);
    printf("Enter the number of moons:");
    scanf("%d", &(*plnp).moons);
    printf("Enter the orbit time in years:");
    scanf("%lf", &(*plnp).orbit_time);
    printf("Enter the rotation time in years:");
    scanf("%lf", &(*plnp).rotation_time);
}

 */




/* CAR EXAMPLE
 
#include <stdio.h>


typedef struct car_struct {
    
    char brand[20];
    float mpg;
    int power;
    double msrp;
    
} car_t;


car_t scan_car(void)
{
    car_t car;
    printf("Enter the car brand:");
    scanf("%s", car.brand);
    printf("Enter miles per gallon:");
    scanf("%f", &car.mpg);
    printf("Enter horse power:");
    scanf("%d", &car.power);
    printf("Enter msrp (in dollars):");
    scanf("%lf", &car.msrp);
    
    return car;
    
}

void scan_car2(car_t *car)
{
    
    printf("Enter the car brand:");
    scanf("%s", car->brand);
    printf("Enter miles per gallon:");
    scanf("%f", &car->mpg);
    printf("Enter horse power:");
    scanf("%d", &car->power);
    printf("Enter msrp (in dollars):");
    scanf("%lf", &car->msrp);
    
    
    
}

int main(void)
{
    
    car_t car1, car2;
    
    scan_car2(&car1);
    scan_car2(&car2);
    
    printf("\n");
    
    if (car1.power > car2.power)
    {
        printf("%s has higher horse power\n", car1.brand);
    }
    else
    {
        printf("%s has higher horse power\n", car2.brand);
    }
    
    
    if (car1.msrp > car2.msrp)
    {
        printf("%s costs more\n", car1.brand);
    }
    else
    {
        printf("%s costs more\n", car2.brand);
    }
    
    return 0;
}

*/


/*
 

#include <stdio.h>


typedef struct atom_struct{
    
    int electrons;
    int protons;
    int neutrons;
    
} Atom;



int main()
{
    Atom hydrogen;
    Atom helium;
    
    hydrogen.electrons = 1;
    hydrogen.protons = 1;
    hydrogen.neutrons = 1;
    
    helium.electrons = 2;
    helium.protons = 2;
    helium.neutrons = 4;
    
    printf("%d\n", hydrogen.electrons);
    
    
    
    
    
    return 0;
}

 */

